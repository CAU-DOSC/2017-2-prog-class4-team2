# README file for TEAM[4,2]:

This text file describes brief but precise and complete specification of project including:
- funtion descriptions: name, input/output parameters
- declaration of of important data and data types to be included in user header file
- your team's brief ideas of implementations

- - -
Your descriptin start form next line and do not delete lines upto this point.

PROJECT OUTLINE

1. 정수값을 입력 받는다(CTRL-Z 가 입력될 때까지 입력받음) 
2. 입력되는 정수값은 linked list를 구성 하면서 node에 저장 
3. 출력하려는 값
	- 입력된 자료의 개수를 출력
	- 입력자료를 입력 역순으로 출력 
	- 입력자료의 중간위치에 있는 자료의 값 출력(중간값이 아님) 	
	- 입력자료를 입력 순으로 출력 
	- 입력자료에서 홀수번째 자료를 모두 삭제 
	- 남은 자료를 순서대로 출력


Ownership
의섭 - 조장/ readme 
민기 - header file
성규 - listlibrary.c (리스트 역순 출력, 리스트 중간 노드 값 출력)
동진 - listlibrary.c (리스트 정순 출력, 리스트 홀수번째 노드 값 출력)
경태 - list.c

Function Descriptions
(함수 정리되는 데로 업데이트)

Declaration of important data and data types in user header file
	name - list.h
	header lnclude - stdio.h, stdlib.h
	struct name - node(Node)
	data- int value, struct node *next



list.h: 헤더 파일
list.c:	메인 파일(메인파일에 입력된 자료의 개수랑 남은 자료를 순서대로 출력) 
listlibrary.c: 리스트 정순,역순 출력/중간 노드값, 홀수번째 노드 값 출력
