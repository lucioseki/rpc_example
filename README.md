# Remote Procedure Call
Exemplo de implementa&ccedil;&atilde;o de RPC.

O comando

    rpcgen -aCM oper.x

gera os arquivos

- Makefile.oper
- oper_client.c;
- oper_clnt.c;
- oper.h;
- oper_server.c;
- oper_svc.c;
- oper_xdr.c;

com a op&ccedil;&atilde;o -a, rpcgen cria arquivos Makefile.oper, oper_client.c e oper_server.c;

com a op&ccedil;&atilde;o -M, as fun&ccedil;&otilde;s de oper_server tornam-se thread safe.

A op&ccedil;&atilde;o -A faria o oper_server criar threads automaticamente conforme a demanda, no entanto esta op&ccedil;&atilde;o est&aacute; dispon&iacute;vel somente no SunRPC da Solaris. No rpcgen do Linux n&atilde;o h&aacute; esta op&ccedil;&atilde;o.

O comando

    make -f Makefile.oper

gera os c&oacute;digos objeto (.o) necess&aacute;rios e os execut&aacute;veis ./oper_server e ./oper_client

Agora podemos executar ./oper_server e v&aacute;rias inst&acirc;ncias de ./oper_client, o oper_server atender&aacute; a cada uma das chamadas de oper_client em sequ&ecirc;ncia.

## Conclus&atilde;o
No Linux n&atilde;o  &eacute; f&aacute;cil implementar servidor multithread como seria no Solaris.
