# README file for TEAM[4,2]:

This text file describes brief but precise and complete specification of project including:
- function descriptions: name, input/output parameters
- declaration of important data and data types to be included in user header file
- your team's brief ideas of implementations

- - -
Your description start form next line and do not delete lines upto this point.
�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�
<PROJECT OUTLINE>

1. �������� �Է� �޴´�(CTRL-Z �� �Էµ� ������ �Է¹���) 
2. �ԷµǴ� �������� linked list�� ���� �ϸ鼭 node�� ���� 
3. ����Ϸ��� ��
	- �Էµ� �ڷ��� ������ ���
	- �Է��ڷḦ �Է� �������� ��� 
	- �Է��ڷ��� �߰���ġ�� �ִ� �ڷ��� �� ���(�߰����� �ƴ�) 	
	- �Է��ڷḦ �Է� ������ ��� 
	- �Է��ڷῡ�� Ȧ����° �ڷḦ ��� ���� 
	- ���� �ڷḦ ������� ���

�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�

<Ownership>
�Ǽ� - ����/ README.txt 
�α� - list.h
���� - list_library-count,backward,middle,del-odd.c (����Ʈ ���� ���, ����Ʈ �߰� ��� �� ���)
���� - list_library-forward,odd.c (����Ʈ ���� ���, ����Ʈ Ȧ����° ��� �� ���)
���� - linklist.c

*���� ���Կ� ������ �ۼ��� ������ ���� list_handling_lib.c�� ������� 
*���� list_info_lib.c������ ����� ������ ���԰� ���ÿ� �ۼ��� node������ ���� �Լ� ���Ǵ� �� ���Ͽ� ����.
*CreateLinkedlist_lib.c������ ����� list.h �κп� �ִ� ��带 ����� �Լ� ���Ǹ� �ش� ���Ϸ� �ű�.

�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�

<Function Descriptions(�� ǥ�� ���� ���� �ʿ��� typedef ���� - typedef struct node * Node * & typedef *Node LINK)>
	name	        	input parameter(���޵� ������ �ڷ����� ��������())   			            ��	output parameter(�Լ��� ��ȯ �ڷ����� ��ȯ�� ����())
	-------------------------------------------------------------------------------------��----------------------------------------------
	create_node    	int�� ����	1��		     				            ��	LINK�� ����
		         	(��忡 ���� �Է°�)		                             			            ��	(������ ��带 ����Ű�� LINK�� ���� cur)
										            ��
	append		LINK�� ���� 2��		      				            ��	LINK�� ���� 1��
			(LINK�� ������ Head�� ������ Node�� ����Ű�� ����ü ������ ������ ���ڷ� ����)     ��	(LINK�� ������ Head)
										            ��
	node_count	LINK�� ���� 1��						            ��	int�� ����
			(LINK�� ������ Head�� ���ڷ� ����)				            ��	(node�� ������ ������ count)	
										            ��
	print_backward	LINK�� ���� 2�� int�� ���� 1��          				            ��	����(void).
			(LINK�� ������ Head�� ����ϱ� ���� ���� �ӽ� LINK�� ������ first�� Head)	            ��	
										            ��
	print_middle	LINK�� ���� 2�� int�� ���� 1��	      				            ��	����(void).
			(LINK�� ������ Head�� ����ϱ� ���� ���� �ӽ� LINK�� ������ first�� Head)	            ��
										            ��
	print_forward	LINK�� ���� 1��		       				            ��	����(void).	
			(LINK�� ������ Head) 					            ��
										            ��
	del_odd_element	LINK�� ���� 1�� int�� ���� 1��					            ��	 LINK�� ����
			(LINK�� ������ Head, ����� ���� ������ ���� num_node) 		            ��	(ù��° ����� next ���� ���� LINK�� ������ cur)
	
�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�	
									
<declaration of important data and data types to be included in user header file>

�츮�� �� user header file name : list.h

list.h�� ����ִ� ����
1. ǥ�� ��� ���� include ���� ( #include <stdio.h>, #include <stdlib.h> )
2. int�� ���� value�� struct node�� ����ü ������ ������ ����� ���� ����ü node
3. typedef ���� ( struct node Node �� typedef Node* LINK )

�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�

<your team's brief ideas of implementations>

1. �Էµ� �ڷ��� ������ŭ�� ��带 ���� ���Ḯ��Ʈ ����� 
-  ���� �ڱ� ����ü node�� �����Ҵ��� �̿��ؼ� ��带 ����� 
    ����ؼ� ���Ŀ� ��带 �߰� ��Ű�� �Էµ� ���� ���� ��ŭ�� ��带 ���� ���Ḯ��Ʈ�� �����.

2. ������ ���Ḯ��Ʈ�� ��� ���� ����
-   Head�� �̿��� ������ traverse�ϸ鼭 next����� ������ NULL�� ���� ��尡 ���� ������
     ����� ������ ���� � �� ������ �����Ѵ�.

3.  �Է� �ڷḦ �Է� �������� ��� 
-   ������ ���Ḯ��Ʈ�� ������ Head�� �̿��� traverse�ؼ� ������ ���� ���� ��尪�� ����ϰ� 
     �ٽ� Head�� �̿��� ó������ ������ traverse�ؼ� ������ �� ���� ���� ��� ���� ����ϰ� 
     �� ������ ù ��° ��尪�� ����� ������ �ݺ��Ѵ�. 

4.  �Է� �ڷ��� �߰���ġ�� �ִ� �ڷ��� �� ��� 
-    ������ ���� ����� ������ �̿��ؼ� �� ����� ������ ������ŭ ������ traverse�ؼ�
      �߰��� �ִ� ����� ��尪�� ����Ѵ�.

5.  �Է� �ڷḦ �Է¼����� ���
-    Head�� �̿��� ������ traverse�ϸ鼭 next����� ������ NULL�� ���� ��尡 ���� ������
     �� ��尪�� ����Ѵ�.

6.  �Է��ڷῡ�� Ȧ����° �ڷḦ ��� ����
-    Head->next -> next ->next�� ����Ű�� �ִ� ��带 head ->next->next�� ����Ű�� ����� 
      head -> next�� ����Ű�� ��带 head�� ����Ű�� �����.
