
-- VHDL Instantiation Created from source file CyclicalCounter.vhd -- 08:22:36 11/16/2012
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT CyclicalCounter
	PORT(
		clk : IN std_logic;
		reset : IN std_logic;          
		s0 : OUT std_logic;
		s1 : OUT std_logic
		);
	END COMPONENT;

	Inst_CyclicalCounter: CyclicalCounter PORT MAP(
		clk => ,
		reset => ,
		s0 => ,
		s1 => 
	);


