
-- VHDL Instantiation Created from source file mux4to1.vhd -- 08:17:37 11/16/2012
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

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

	Inst_mux4to1: mux4to1 PORT MAP(
		usec => ,
		dsec => ,
		umin => ,
		dmin => ,
		display => ,
		s0 => ,
		s1 => 
	);


