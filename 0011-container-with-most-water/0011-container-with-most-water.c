int min(int a,int b) {
    return (a < b) ? a : b;
}

int maxArea(int* height, int heightSize) {
    int left = 0;
    int right = heightSize - 1;
    int max = 0;
    int area = 0;

    while(right > left){

        area = (right - left) * min(height[right],height[left]);

        if(area > max) {
            max = area;
        }

        if(height[left] < height[right]) {
            left++;
        }
        else{
            right--;
        }
    }

    return max;
}