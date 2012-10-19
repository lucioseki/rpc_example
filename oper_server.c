#include "oper.h"

bool_t soma_1_svc(oper_in *argp, long *result, struct svc_req *rqstp){
	printf("thread %ld\n", pthread_self());
	*result = argp->arg1 + argp->arg2;
	return 1;
}

bool_t dif_1_svc(oper_in *argp, long *result, struct svc_req *rqstp){
	printf("thread %ld\n", pthread_self());
	*result = argp->arg1 - argp->arg2;
	return 1;
}

bool_t prod_1_svc(oper_in *argp, long *result, struct svc_req *rqstp){
	printf("thread %ld\n", pthread_self());
	*result = argp->arg1 * argp->arg2;
	return 1;
}

bool_t razao_1_svc(oper_in *argp, long *result, struct svc_req *rqstp){
	printf("thread %ld\n", pthread_self());
	*result = argp->arg1 / argp->arg2;
	return 1;
}

int oper_1_freeresult (SVCXPRT *transp, xdrproc_t xdr_result, caddr_t result){
	xdr_free (xdr_result, result);
	return 1;
}
