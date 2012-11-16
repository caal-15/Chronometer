--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   08:34:27 11/16/2012
-- Design Name:   
-- Module Name:   /home/pin3da/Repos/Chronometer/tb_chronometer.vhd
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
 
ENTITY tb_chronometer IS
END tb_chronometer;
 
ARCHITECTURE behavior OF tb_chronometer IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Chronometer
    PORT(
         clk : IN  std_logic;
         reset : IN  std_logic;
         dataout : OUT  std_logic_vector(7 downto 0);
         displaySelector : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal reset : std_logic := '0';

 	--Outputs
   signal dataout : std_logic_vector(7 downto 0);
   signal displaySelector : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Chronometer PORT MAP (
          clk => clk,
          reset => reset,
          dataout => dataout,
          displaySelector => displaySelector
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period;
		clk <= '1';
		wait for clk_period;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
		reset<='0';

      wait;
   end process;

END;
