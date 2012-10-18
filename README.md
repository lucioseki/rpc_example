# Remote Procedure Call
Exemplo de implementa&ccedil;&atilde;o de RPC.

O comando

    rpcgen -aCM oper.x

gera os arquivos

-Makefile.oper
-oper_client.c;
-oper_clnt.c;
-oper.h;
-oper_server.c;
-oper_svc.c;
-oper_xdr.c;

com a opcao -a, rpcgen cria arquivos Makefile.oper, oper_client.c e oper_server.c;

com a opcao -M, oper_server tem suporte a multithread.

O comando

    make -f Makefile.oper

gera os c&oacute;digos objeto (.o) necess&aacute;rios e os execut&aacute;veis ./oper_server e ./oper_client	
