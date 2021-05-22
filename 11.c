// 크기 비교를 위해 간단한 함수를 만듦 //
int max(int a, int b)
{
    if(a > b)
        return a;
    return b;
}

int min(int a, int b)
{
    if(a < b)
        return a;
    return b;
}

int maxArea(int* height, int heightSize){ //막대 높이들 담을 배열, 배열 크기
    int result, area, temp; //결과값, 결과값과 비교할 최종 변수, 계산하여 담을 변수
    
    result = 0;
    area = 0;
    for(int i = 0; i < heightSize; i++)
    {
        for(int j = i + 1; j < heightSize; j++)
        {
            temp = (j - i) * min(height[i], height[j]);
            area = max(area, temp);
        }
        result = max(result, area);
    }
    
    return result;
}
