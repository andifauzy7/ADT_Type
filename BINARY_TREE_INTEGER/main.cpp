#include "nbtree_d.h"

int main(){
	nbTree MyList;

	nbAddr First;
	create_node(&First);
	insert_node(&First,20);
	insert_node(&First,15);
	insert_node(&First,30);
	insert_node(&First,18);
	insert_node(&First,10);
	insert_node(&First,17);
	insert_node(&First,25);
	insert_node(&First,40);
	insert_node(&First,35);
	insert_node(&First,50);
	insert_node(&First,38);

    printf("Post Order\t: ");
	nbPost(First);
	printf("\n");
	printf("Pre Order\t: ");
	nbPre(First);
	printf("\n");
	printf("In Order\t: ");
	nbIn(First);
	printf("\n");
	printf("Lv Order\t: ");
	print_level(First);
	printf("\n\n");

	nbCreate(&MyList);
	nbInsert(&MyList,nbSearch(MyList.root,0),20);

	nbInsert(&MyList,nbSearch(MyList.root,20),15);
	nbInsert(&MyList,nbSearch(MyList.root,15),10);
	nbInsert(&MyList,nbSearch(MyList.root,15),18);
	nbInsert(&MyList,nbSearch(MyList.root,18),17);

	nbInsert(&MyList,nbSearch(MyList.root,20),30);
	nbInsert(&MyList,nbSearch(MyList.root,30),25);
	nbInsert(&MyList,nbSearch(MyList.root,30),40);
	nbInsert(&MyList,nbSearch(MyList.root,40),35);
	nbInsert(&MyList,nbSearch(MyList.root,35),38);
	nbInsert(&MyList,nbSearch(MyList.root,40),50);

	printf("Post Order\t: ");
	nbPost(MyList.root);
	printf("\n");
	printf("Pre Order\t: ");
	nbPre(MyList.root);
	printf("\n");
	printf("In Order\t: ");
	nbIn(MyList.root);
	printf("\n");
	printf("Lv Order\t: ");
	print_level(MyList.root);

	/*
    printf("\n");
    //delete_node(&MyList);

    printf("\n");

	printf("Post Order\t: ");
	nbPost(MyList.root);
	printf("\n");
	printf("Pre Order\t: ");
	nbPre(MyList.root);
	printf("\n");
	printf("In Order\t: ");
	nbIn(MyList.root);

	printf("\n");
	nbPrint(MyList.root," ");
	printf("\n\n");
	printf("\n");

	printf("KEDALAMAN = %d", nbDepth(MyList.root));
    */
	return 0;
}
