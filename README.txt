# README file for TEAM[4,2]:

This text file describes brief but precise and complete specification of project including:
- function descriptions: name, input/output parameters
- declaration of important data and data types to be included in user header file
- your team's brief ideas of implementations

- - -
Your description start form next line and do not delete lines upto this point.
- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -
<PROJECT OUTLINE>

1. 정수값을 입력 받는다(CTRL-Z 가 입력될 때까지 입력받음)
2. 입력되는 정수값은 linked list를 구성 하면서 node에 저장
3. 출력하려는 값
	- 입력된 자료의 개수를 출력
	- 입력자료를 입력 역순으로 출력
	- 입력자료의 중간위치에 있는 자료의 값 출력(중간값이 아님)
	- 입력자료를 입력 순으로 출력
	- 입력자료에서 홀수번째 자료를 모두 삭제
	- 남은 자료를 순서대로 출력

- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -

<Ownership>
의섭 - 조장/ README.txt
민기 - list.h
성규 - list_library-count,backward,middle,del-odd.c (리스트 역순 출력, 리스트 중간 노드 값 출력)
동진 - list_library-forward,odd.c (리스트 정순 출력, 리스트 홀수번째 노드 값 출력)
경태 - linklist.c

*이후 성규와 동진이 작성한 파일을 합쳐 list_handling_lib.c로 만들었고
*따로 list_info_lib.c파일을 만들어 동진과 성규가 동시에 작성한 node개수를 세는 함수 정의는 이 파일에 넣음.
*CreateLinkedlist_lib.c파일을 만들어 list.h 부분에 있던 노드를 만드는 함수 정의를 해당 파일로 옮김.

- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -

<Function Descriptions(이 표를 보기 위해 필요한 typedef 정보 - typedef struct node * Node * & typedef *Node LINK)>
	name	        	input parameter(전달된 인자의 자료형과 인자정보())   			           	output parameter(함수의 반환 자료형과 반환값 정보())
	-----------------------------------------------------------------------------------------------------------------------------------
	create_node    	int형 변수	1개		     				            	LINK형 변수
		         	(노드에 넣을 입력값)		                             			            	(생성한 노드를 가리키는 LINK형 변수 cur)

	append		LINK형 변수 2개		      				            	LINK형 변수 1개
			(LINK형 포인터 Head와 생성한 Node를 가리키는 구조체 포인터 변수를 인자로 전달)     	(LINK형 포인터 Head)

	node_count	LINK형 변수 1개						            	int형 변수
			(LINK형 포인터 Head를 인자로 전달)				            	(node의 개수를 저장한 count)

	print_backward	LINK형 변수 2개 int형 변수 1개          				            	없음(void).
			(LINK형 포인터 Head를 대신하기 위해 쓰는 임시 LINK형 변수인 first와 Head)

	print_middle	LINK형 변수 2개 int형 변수 1개	      				            	없음(void).
			(LINK형 포인터 Head를 대신하기 위해 쓰는 임시 LINK형 변수인 first와 Head)

	print_forward	LINK형 변수 1개		       				            	없음(void).
			(LINK형 포인터 Head)

	del_odd_element	LINK형 변수 1개 int형 변수 1개					            	 LINK형 변수
			(LINK형 포인터 Head, 노드의 수를 저장한 변수 num_node) 		            	(첫번째 노드의 next 값을 가진 LINK형 포인터 cur)

- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -

<declaration of important data and data types to be included in user header file>

우리가 쓴 user header file name : list.h

list.h에 들어있는 선언
1. 표준 헤더 파일 include 선언 ( #include <stdio.h>, #include <stdlib.h> )
2. int형 변수 value와 struct node형 구조체 포인터 변수를 멤버로 가진 구조체 node
3. typedef 선언 ( struct node Node 와 typedef Node* LINK )

- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -

<your team's brief ideas of implementations>

1. 입력된 자료의 개수만큼의 노드를 가진 연결리스트 만들기
-  먼저 자기 구조체 node와 동적할당을 이용해서 노드를 만들고
    계속해서 이후에 노드를 추가 시키며 입력된 값의 개수 만큼의 노드를 가진 연결리스트를 만든다.

2. 생성된 연결리스트의 노드 개수 세기
-   Head를 이용해 노드들을 traverse하면서 next멤버의 값으로 NULL을 가진 노드가 나올 때까지
     노드의 개수를 세어 어떤 한 변수에 저장한다.

3.  입력 자료를 입력 역순으로 출력
-   생성된 연결리스트의 노드들을 Head를 이용해 traverse해서 마지막 노드로 가서 노드값을 출력하고
     다시 Head를 이용해 처음부터 노드들을 traverse해서 마지막 전 노드로 가서 노드 값을 출력하고
     이 과정을 첫 번째 노드값을 출력할 때까지 반복한다.

4.  입력 자료의 중간위치에 있는 자료의 값 출력
-    이전에 구한 노드의 개수를 이용해서 그 노드의 개수의 절만만큼 노드들을 traverse해서
      중간에 있는 노드의 노드값을 출력한다.

5.  입력 자료를 입력순으로 출력
-    Head를 이용해 노드들을 traverse하면서 next멤버의 값으로 NULL을 가진 노드가 나올 때까지
     각 노드값을 출력한다.

6.  입력자료에서 홀수번째 자료를 모두 삭제
-    Head->next -> next ->next가 가리키고 있는 노드를 head ->next->next가 가리키게 만들고
      head -> next가 가리키는 노드를 head가 가리키게 만든다.
