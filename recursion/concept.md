### 재귀 함수
- 함수 내에서 자기 자신을 다시 호출하는 함수

![alt text](image.png)

```c
void Recursive(void)
{
	printf("Recursive call! \n");
	Recursive();
}
```
- 함수를 구성하는 명령문은 cpu로 복사되어 다시 실행됨
- 함수를 완료하지 않은 상태에서 다시 **Recursive**함수를 호출하는 것은 문제가 되지 않는다.