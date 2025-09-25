/*
Name: Mwangi Samuel
Reg. No.:CT100/G/26145/25
Description:program to find the volume and surfacearea of a given cylinder
surfacearea= 2*3.142 *radius*radius+2*3.142*radius*height
volume=3.142*radius*radius*height
*/
int main() {
	float radius, height, volume, surfacearea;
	
	//prompt user for input
	printf("key in the radius of the cylinder: ");
	scanf("%f", &radius);
	
	printf("key in the height of the cylinder: ");
	scanf("%f", &height);
	
	//calculate the volume of the cylinder
	volume=3.142*radius*radius*height;
	
	//caculate the surface area of the cylinder
	surfacearea= 2*3.142 *radius*radius+2*3.142*radius*height;
	
	//display outcomes
	printf("volume of the cylinder =%.2f\n",volume);
	printf("surfacearea of the cylinder =%.2f/n", surfacearea);
	
	return 0;
}
