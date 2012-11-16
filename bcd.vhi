
-- VHDL Instantiation Created from source file bcd.vhd -- 08:20:17 11/16/2012
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT bcd
	PORT(
		clk : IN std_logic;
		reset : IN std_logic;
		datain : IN std_logic_vector(3 downto 0);          
		dataout : OUT std_logic_vector(7 downto 0)
		);
	END COMPONENT;

	Inst_bcd: bcd PORT MAP(
		clk => ,
		reset => ,
		datain => ,
		dataout => 
	);


