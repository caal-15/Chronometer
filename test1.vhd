----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:51:27 11/20/2012 
-- Design Name: 
-- Module Name:    test1 - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity test1 is
    Port ( clk : in  STD_LOGIC;
           reset : in  STD_LOGIC;
			  c1 : out std_logic_vector (3 downto 0);
			  c2 : out std_logic_vector (3 downto 0);
			  c3 : out std_logic_vector (3 downto 0);
			  c4 : out std_logic_vector (3 downto 0));
end test1;

architecture Behavioral of test1 is

COMPONENT Div50Mto700
	PORT(
		clk50m : IN std_logic;
		reset : IN std_logic;          
		clk700 : OUT std_logic
		);
END COMPONENT;

COMPONENT cont
	PORT(
		clk : IN std_logic;
		reset : IN std_logic;          
		cont1out : OUT std_logic_vector(3 downto 0);
		cont2out : OUT std_logic_vector(3 downto 0);
		cont3out : OUT std_logic_vector(3 downto 0);
		cont4out : OUT std_logic_vector(3 downto 0)
		);
END COMPONENT;

signal clk1 : std_logic;

begin

Inst_Div50Mto700: Div50Mto700 PORT MAP(
		clk50m => clk,
		reset => reset,
		clk700 => clk1
	);
	
Inst_cont: cont PORT MAP(
		clk => clk1,
		reset => reset ,
		cont1out => c1,
		cont2out => c2,
		cont3out => c3,
		cont4out => c4 
	);


end Behavioral;

