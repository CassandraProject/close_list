#include <stdlib.h>
#include <stdio.h>
#include <fox/om_user.h>
#include <fox/om_ecode.h>

#define SIZE 255

void errorCheck(int);

int main(int argc, char *argv[])
{
	struct om_header_node om_list_hdr;
	struct open_var vars[SIZE];
	struct net_adr adr_tbl[1];
	int ret, list;

	memset(&om_list_hdr, 0, sizeof(struct om_header_node));
	memset(vars, 0, SIZE * sizeof(struct open_var));

	if(argc != 2)
	{
		printf("\nUsage: %s list_number\n\n", argv[0]);
		exit(1);
	}

	list = atoi(argv[1]);

	om_list_hdr.net_adr_tbl_ptr = adr_tbl;
	om_list_hdr.size_net_adr_tbl = 1;
	om_list_hdr.open_list_ptr = vars;

	ret = omclose(list, &om_list_hdr, vars, adr_tbl);
	errorCheck(ret);

	return(0);
}

void errorCheck(int returnValue)
{
	if(returnValue != OM_SUCCESS)
	{
		printf("error: %d\n", returnValue);
	}
}
