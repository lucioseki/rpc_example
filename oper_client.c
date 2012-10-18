#include "oper.h"

int main (int argc, char *argv[]){
	long res;
	CLIENT *clnt;
	oper_in in;
	char op;

	if (argc != 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	clnt = clnt_create(argv[1], OPER, OPER_VERS, "udp");

	while(scanf("%d %c %d", &in.arg1, &op, &in.arg2) != EOF){

		switch(op){
			case '+':
				soma_1(&in, &res, clnt);
				break;
			case '-':
				dif_1(&in, &res, clnt);
				break;
			case '*':
				prod_1(&in, &res, clnt);
				break;
			case '/':
				if(in.arg2 == 0){
					printf("Divisao por zero\n");
				}else{
					razao_1(&in, &res, clnt);
				}
				break;
			default:
				printf("operacao invalida");
				exit(1);
		} // end switch

		if(op != '/' || in.arg2 != 0)
			printf("%d %c %d = %d\n", in.arg1, op, in.arg2, res);

	} // end while
	
	exit (0);
}
