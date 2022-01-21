//Two pointer approach

int maxArea(vector<int>& height) {
	//one pointer ar the first line
	int left;
	//one pointer at last line
	int right = height.size()-1;
	//one variable to measure the water i.e nothing but the height*width
	int water = 0;
	//iterate until left < right
	while(left<right){
		int area;
		//if left is smaller, calculate area and store it in a variable
		if(height[left]<height[right]){
			area = height[left]*(right - left);
			left++;
		}
		//if right is smaller, do the same
		else{
			area = height[right]*(right - left);
			right--;
		}
		//return the maximum of water and area, because if the area is bigger than the water, only then it is going to be updated
		water = max(area, water);
	}

	return water;

}
