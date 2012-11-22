----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:31:30 11/16/2012 
-- Design Name: 
-- Module Name:    Chronometer1 - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity Chronometer1 is
    Port ( clk_c : in  STD_LOGIC;
           reset_c : in  STD_LOGIC;
           dataout_c : out  STD_LOGIC_VECTOR (7 downto 0);
           displaySelector_c : out  STD_LOGIC_VECTOR (3 downto 0));
end Chronometer1;

architecture arch_crh of Chronometer1 is

COMPONENT Div50Mto700
	PORT(
		clk50m : IN std_logic;
		reset : IN std_logic;          
		clk700 : OUT std_logic
		);
END COMPONENT;


COMPONENT CyclicalCounter 
	PORT(
		clk : IN std_logic;
		reset : IN std_logic;          
		s0 : OUT std_logic;
		s1 : OUT std_logic
		);
END COMPONENT;

COMPONENT Decoder2to4
	PORT(
		s0 : IN std_logic;
		s1 : IN std_logic;          
		dispsel : OUT std_logic_vector(3 downto 0)
		);
END COMPONENT;

COMPONENT Div50Mto1
	PORT(
		clk50M : IN std_logic;
		reset : IN std_logic;          
		clk1 : OUT std_logic
		
		);
END COMPONENT;


COMPONENT bcd
	PORT(
		clk : IN std_logic;
		reset : IN std_logic;
		datain : IN std_logic_vector(3 downto 0);          
		dataout : OUT std_logic_vector(7 downto 0)
		);
END COMPONENT;


COMPONENT cont59x2
	PORT(
		clk : IN std_logic;
		reset : IN std_logic;          
		cont1out : OUT std_logic_vector(3 downto 0);
		cont2out : OUT std_logic_vector(3 downto 0);
		cont3out : OUT std_logic_vector(3 downto 0);
		cont4out : OUT std_logic_vector(3 downto 0)
		);
END COMPONENT;

	COMPONENT mux4to1
	PORT(
		usec : IN std_logic_vector(3 downto 0);
		dsec : IN std_logic_vector(3 downto 0);
		umin : IN std_logic_vector(3 downto 0);
		dmin : IN std_logic_vector(3 downto 0);
		s0 : IN std_logic;
		s1 : IN std_logic;          
		display : OUT std_logic_vector(3 downto 0)
		);
END COMPONENT;

signal div1toTime : std_logic;
signal div700tocount : std_logic;
signal timetomux1, timetomux2, timetomux3,timetomux4,muxtobcd : std_logic_vector(3 downto 0);
signal countertodecMux : std_logic_vector(1 downto 0);


begin

Inst_Div50Mto700: Div50Mto700 PORT MAP(
		clk50m => clk_c,
		reset => reset_c,
		clk700 => div700tocount
	);

Inst_Div50Mto1: Div50Mto1 PORT MAP(
		clk50M => clk_c,
		reset => reset_c,
		clk1 => div1totime 
	);	

Inst_cont59x2: cont59x2 PORT MAP(
		clk => div1totime ,
		reset => reset_c ,
		cont1out => timetomux1,
		cont2out => timetomux2,
		cont3out => timetomux3,
		cont4out => timetomux4 
	);

Inst_mux4to1: mux4to1 PORT MAP(
		usec => timetomux1,
		dsec => timetomux2,
		umin => timetomux3,
		dmin => timetomux4,
		display => muxtobcd,
		s0 => countertodecMux(0),
		s1 => countertodecMux(1)
	);

Inst_bcd: bcd PORT MAP(
		clk => clk_c,
		reset => reset_c,
		datain => muxtobcd,
		dataout => dataout_c
	);



Inst_CyclicalCounter: CyclicalCounter PORT MAP(
		clk => div700tocount,
		reset => reset_c,
		s0 => countertodecMux(0),
		s1 => countertodecMux(1)
	);

Inst_Decoder2to4: Decoder2to4 PORT MAP(
		s0 => countertodecMux(0),
		s1 => countertodecMux(1),
		dispsel =>  displaySelector_c
	);





end arch_crh;

