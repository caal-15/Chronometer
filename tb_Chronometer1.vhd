--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   17:03:43 11/20/2012
-- Design Name:   
-- Module Name:   F:/Documentos/Electronica/DigiClock/tb_Chronometer1.vhd
-- Project Name:  DigiClock
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Chronometer
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY tb_Chronometer1 IS
END tb_Chronometer1;
 
ARCHITECTURE behavior OF tb_Chronometer1 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Chronometer
    PORT(
         clk_c : IN  std_logic;
         reset_c : IN  std_logic;
         dataout_c : OUT  std_logic_vector(7 downto 0);
         displaySelector_c : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk_c : std_logic := '0';
   signal reset_c : std_logic := '0';

 	--Outputs
   signal dataout_c : std_logic_vector(7 downto 0);
   signal displaySelector_c : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant clk_c_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Chronometer PORT MAP (
          clk_c => clk_c,
          reset_c => reset_c,
          dataout_c => dataout_c,
          displaySelector_c => displaySelector_c
        );

   -- Clock process definitions
   clk_c_process :process
   begin
		clk_c <= '0';
		wait for clk_c_period;
		clk_c <= '1';
		wait for clk_c_period;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin	
		reset_c<='0';
      -- hold reset state for 100 ns.
      wait for 100 ns;	

     

      -- insert stimulus here 

      wait;
   end process;

END;
