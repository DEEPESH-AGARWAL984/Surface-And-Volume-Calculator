
#include<stdio.h>
#include<conio.h>

//Function to calculate the area,perimeter of rectangle.
void rectangle(){
	float l,b;
	printf("\tEnter the length: ");
	scanf("%f",&l);
	printf("\tEnter the breadth: ");	
	scanf("%f",&b);
	
	float perimeter = 2*(l+b);
	printf("\n\tPerimeter Of Rectangle = %f units",perimeter);
	
	float area = l * b;
	printf("\n\tArea Of Rectangle = %f sq. units",area);	
}

//Function to calculate the area,circumference,diameter of the circle.
void circle(){
	float radius;
	printf("\t\n\tEnter the radius of circle: ");
	scanf("%f", &radius);
	
	float circumference = 2*3.14*radius;
	printf("\n\tCircumference of circle:%f units",circumference);
	
	float diameter = 2*radius;
	printf("\n\tDiameter of circle:%f units",diameter);
	
	float area_circle = 3.14*radius*radius;
	printf("\n\tArea of circle:%f sq. units",area_circle);
}

//Fucntion to calculate the area of triangle. 
void triangle(){
	float b,h;
	printf("\tEnter the base of triangle: ");
	scanf("%f",&b);
	printf("\tEnter the height of triangle: ");	
	scanf("%f",&h);
	
	float area = (b*h)/2;
	printf("\n\tArea Of Triangle = %f sq. units",area);	
}

//Function to calculate the TSA,LSA,Volume,Perimeter of Cuboid.
void Cuboid(){
	float l,b,h;
	printf("\tEnter the length of cuboid: ");
	scanf("%f",&l);
	printf("\tEnter the breadth of cuboid: ");	
	scanf("%f",&b);
	printf("\tEnter the height of cuboid: ");	
	scanf("%f",&h);
	
	float perimeter = 4*(l+b+h);
	printf("\n\tPerimeter Of Cuboid = %f units",perimeter);
	
	float TSA = 2*(l*b + b*h + l*h);
	printf("\n\tTSA Of Cuboid = %f sq. units",TSA);	
	
	float Volume = l*b*h;
	printf("\n\tVolume Of Cuboid = %f cubic units",Volume);
	
	float LSA = 2*h*(l+b);
	printf("\n\tLSA Of Cuboid = %f units",LSA);
	
}

//Function to calculate the perimeter,TSA,LSA,Volume of Cube.
void Cube(){
	float side;
	printf("\tEnter the side of cube: ");
	scanf("%f",&side);

	float perimeter = 12*side;
	printf("\n\tPerimeter Of Cube = %f units",perimeter);
	
	float TSA = 6*side*side;
	printf("\n\tTSA Of Cube = %f sq. units",TSA);	
	
	float Volume = side*side*side;
	printf("\n\tVolume Of Cube = %f cubic units",Volume);
	
	float LSA = 4*side*side;
	printf("\n\tLSA Of Cube = %f units",LSA);	
}

//Function to calculate the TSA,CSA,Volume of Cylinder.
void Cylinder(){
	float radius,height;
	printf("\tEnter the radius of cyliner: ");
	scanf("%f",&radius);
	printf("\tEnter the height of cylinder: ");	
	scanf("%f",&height);
	
	float CSA = 2*3.14*radius*height;
	printf("\n\tCSA Of Cylinder = %f sq. units",CSA);	
	
	float Volume = 3.14*radius*radius*height;
	printf("\n\tVolume Of Cylinder = %f cubic units",Volume);
	
	float TSA = 2*3.14*radius*(radius + height);
	printf("\n\tTSA Of Cylinder = %f sq. units",TSA);	
}

//Function to calculate the TSA,CSA,Volume of Cone.
void Cone(){
	float radius,height,l;
	printf("\tEnter the radius of cone: ");
	scanf("%f",&radius);
	printf("\tEnter the height of cone: ");	
	scanf("%f",&height);
	printf("\tEnter the slant height of cone: ");	
	scanf("%f",&l);
	
	float CSA = 3.14*radius*l;
	printf("\n\tCSA Of Cone = %f sq. units",CSA);	
	
	float Volume = (3.14*radius*radius*height)/3;
	printf("\n\tVolume Of Cone = %f cubic units",Volume);
	
	float TSA = 3.14*radius*(radius + l);
	printf("\n\tTSA Of Cone = %f sq. units",TSA);	
}

//Function to calculate the SA,Volume of Sphere.
void Sphere(){
	float radius,height;
	printf("\tEnter the radius of sphere: ");
	scanf("%f",&radius);
	
	float SA = 4*3.14*radius*radius*radius;
	printf("\n\tSA Of Sphere = %f sq. units",SA);	
	
	float Volume = 4*(3.14*radius*radius*radius)/3;
	printf("\n\tVolume Of Sphere = %f cubic units",Volume);	
}

//Function to calculate the TSA,CSA,Volume of Hemisphere.
void Hemisphere(){
	float radius,height;
	printf("\tEnter the radius of hemisphere: ");
	scanf("%f",&radius);

	float CSA = 2*3.14*radius*radius;
	printf("\n\tCSA Of Hemisphere = %f sq. units",CSA);	
	
	float Volume = 2*(3.14*radius*radius*radius)/3;
	printf("\n\tVolume Of Hemisphere = %f cubic units",Volume);
	
	float TSA = 3*3.14*radius*radius;
	printf("\n\tTSA Of Hemisphere = %f sq. units",TSA);	
}



int main(){
	printf("\t\t----Surface Area And Volume Calculator----\t");
	printf("\n\t1.Properties Of Rectangle \t2.Properties Of Circle\t ");
	printf("\n\t3.Properties Of Triangle\t");
	printf("4.Properties Of Cuboid\t");
	printf("\n\t5.Properties Of Cube\t");
	printf("\t6.Properties Of Cylinder\t");
	printf("\n\t7.Properties Of Cone\t");
	printf("\t8.Properties Of Hemisphere\n \t");
	printf("\t\t9.Properties Of Sphere\n \t");
	while(1){
	int choice;
	printf("\n\n\tEnter your choice: ");
	scanf("%d", &choice);
	
		switch(choice){
			
			case 1:
				rectangle();
				break;
			case 2:
				circle();
				break;
			case 3:
				triangle();
				break;
				
			case 4:
				Cuboid();
				break;
				
			case 5:
				Cube();
				break;
			case 6:
				Cylinder();
				break;
			case 7:
				Cone();
				break;	
			case 8:
				Hemisphere();
				break;
			case 9:
				Sphere();
				break;			
			default:
				printf("\tInvalid Choice.");		
				break;	
		}
	}
	
}
