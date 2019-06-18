/*
File	: nbtree_d.h
Author	: SN
Last Updt : 25-5-2011
*/

#ifndef nbtree_d_H
#define nbtree_d_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "boolean.h"

typedef struct nbTreeNode *nbAddr;
typedef int nbType;

typedef struct nbTreeNode{
	nbAddr left,right;
	nbType info,height;
}ElmtTree;


/* ---------------- Alokasi node baru Tree ---------------- */
void create_node(nbAddr *root);
//Alokasi untuk membuat node baru

/* ---------------- Operasi-operasi Tree ---------------- */
void insert_node(nbAddr *root, nbType X);
// Menambah element pada node parent

nbAddr value_minimum(nbAddr root);
// Mencari Nilai Minimum untuk keperluan DELETE.

nbAddr nbSearch(nbAddr root, nbType src);
// Mencari node dengan info ttn dan mengembalikan addressnya

int nbDepth(nbAddr root);
// Mengukur kedalaman suatu node dari root

int bHeight(nbAddr root);
// Mengukur Ketinggian suatu node

/* ---------------- TRAVERSAL Tree ---------------- */
void nbPost(nbAddr root); // Postorder traversing
void nbPre(nbAddr root); // Preorder traversing
void nbIn(nbAddr root); // Inorder traversing
void nbLevelOrder(nbAddr root,int level); // Levelorder traversing
void print_level(nbAddr root);

/* Modul Pembantu Untuk Tree AVL */

int max(int a, int b);
nbAddr build_node(nbType value);
int height_node(nbAddr root);
nbAddr rotasi_kanan(nbAddr y);
nbAddr rotasi_kiri(nbAddr x);
int get_different(nbAddr N);
nbAddr input_node(nbAddr node, int value);

#endif
