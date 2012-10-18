struct oper_in{
	long arg1;
	long arg2;
};

program OPER{
	version OPER_VERS{
		long SOMA(oper_in)= 0;
		long DIF(oper_in) = 1;
		long PROD(oper_in) = 2;
		long RAZAO(oper_in) = 3;
	}=1;
} = 0;
