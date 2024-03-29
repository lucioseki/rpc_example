/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include <memory.h> /* for memset */
#include "oper.h"

/* Default timeout can be changed using clnt_control() */
static struct timeval TIMEOUT = { 25, 0 };

enum clnt_stat 
soma_1(oper_in *argp, long *clnt_res, CLIENT *clnt)
{
	return (clnt_call(clnt, SOMA,
		(xdrproc_t) xdr_oper_in, (caddr_t) argp,
		(xdrproc_t) xdr_long, (caddr_t) clnt_res,
		TIMEOUT));
}

enum clnt_stat 
dif_1(oper_in *argp, long *clnt_res, CLIENT *clnt)
{
	return (clnt_call(clnt, DIF,
		(xdrproc_t) xdr_oper_in, (caddr_t) argp,
		(xdrproc_t) xdr_long, (caddr_t) clnt_res,
		TIMEOUT));
}

enum clnt_stat 
prod_1(oper_in *argp, long *clnt_res, CLIENT *clnt)
{
	return (clnt_call(clnt, PROD,
		(xdrproc_t) xdr_oper_in, (caddr_t) argp,
		(xdrproc_t) xdr_long, (caddr_t) clnt_res,
		TIMEOUT));
}

enum clnt_stat 
razao_1(oper_in *argp, long *clnt_res, CLIENT *clnt)
{
	return (clnt_call(clnt, RAZAO,
		(xdrproc_t) xdr_oper_in, (caddr_t) argp,
		(xdrproc_t) xdr_long, (caddr_t) clnt_res,
		TIMEOUT));
}
