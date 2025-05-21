# 🧠 C 언어를 공부할 때 꼭 알아야 할 핵심 내용 (5단계 요약 + 표 정리)

---

## 1️⃣ C 언어 기초 문법

| 항목 | 설명 |
|------|------|
| **main 함수 구조** | C 프로그램의 시작점 |
| **변수와 자료형** | `int`, `float`, `char`, `double` 등 |
| **입출력 함수** | `printf`, `scanf` |
| **산술 연산자** | `+`, `-`, `*`, `/`, `%` |
| **비교/논리 연산자** | `==`, `!=`, `>`, `<`, `&&`, `||` |
| **제어문** | `if`, `else`, `switch`, `for`, `while`, `do while` |

```c
#include <stdio.h>

int main() {
    int a = 5;
    printf("a = %d\n", a);
    return 0;
}
2️⃣ 함수와 배열
항목	설명
함수 정의	int add(int a, int b) 형식
배열 선언	int arr[5] = {1, 2, 3, 4, 5};
문자열 처리	char str[] = "Hello";
문자열 함수	strlen, strcpy, strcmp 등 (<string.h>)

c
복사
편집
int add(int x, int y) {
    return x + y;
}
3️⃣ 포인터 기초
항목	설명
주소 연산자	&a : 변수 a의 주소
포인터 선언	int *p = &a;
간접 참조	*p를 통해 값 접근
배열과 포인터	배열 이름은 포인터처럼 사용 가능
함수 인자로 포인터 전달	call by reference 방식으로 값 변경 가능

c
복사
편집
int a = 10;
int *p = &a;
printf("%d\n", *p);  // 10
4️⃣ 구조체와 파일 입출력
항목	설명
구조체 선언	struct로 여러 데이터 묶기
typedef	구조체 이름 간결화
파일 열기/닫기	fopen, fclose
파일 입출력	fprintf, fscanf, fgets, fputs 등

c
복사
편집
typedef struct {
    char name[20];
    int age;
} Person;
5️⃣ 동적 메모리와 디버깅
항목	설명
동적 메모리 할당	malloc, calloc, realloc
메모리 해제	free()
헤더 파일 분리	.h 파일로 코드 모듈화
간단한 디버깅 방법	printf로 값 확인, 컴파일러 경고 보기

c
복사
편집
int *arr = (int *)malloc(5 * sizeof(int));
free(arr);
📚 추천 학습 자료
자료명	설명	링크
점프 투 C	기초부터 중급까지 친절한 튜토리얼	https://dojang.io/course/view.php?id=2
백준 온라인 저지	다양한 문제를 풀며 실력 향상	https://www.acmicpc.net/
C 언어 레퍼런스	함수/문법 상세 설명 (영문)	https://en.cppreference.com/w/c

✅ 마무리 팁
기본기를 탄탄히 익힌 후, 직접 코딩하며 연습하는 것이 가장 중요합니다.

처음에는 간단한 계산기, 문자열 도구, 파일 처리기 등을 만들어보세요.

"백준", "프로그래머스" 등의 문제 풀이 사이트도 병행하면 효과적입니다.

필요하면 각 단계별 예제 코드, 실습 문제, 미니 프로젝트도 도와드릴게요! 😊

yaml
복사
편집

---

이제 핵심 항목들이 표로 정리되어 훨씬 가독성이 좋아졌습니다.  
이 마크다운 파일을 GitHub에 올리거나, VS Code, Notion 등에서 활용하면 매우 유용합니다.  
PDF, 프린트용, 한글(.hwp) 버전으로도 변환해드릴 수 있으니 원하시면 말씀해주세요!



