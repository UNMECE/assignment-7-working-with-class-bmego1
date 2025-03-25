#include <iostream>
#include <cmath>

class Electric_field {

	private:
		double *E

	public:
		Electric_Field(double x, double y, double z) {
			E = new double[3]{x, y, z};
		}

		Electric_Field() {
			E = new double[3] {0.0, 0.0, 0.0};
		}

		~Electrical_Field() {
			delete[] E;
		}

		double calculate_Magnitude() {
			return std::sqrt(E[0]*E[0] + E[1]*E[1] + E[2]*E[2]);
		}

		//Getter
		double getx() {return E[0];}
		double gety() {return E[1];}
		double getz() {return E[2];}
		

		//Setter
		void setx(double z) {return E[0];}
		void sety(double y) {return E[1];}
		void setz(double z) {return E[2];}

		double inner_Product() {
			return E[0]*E[0] + E[1]*E[1] + E[2]*E[2];
		}
};





class Magnetic_Field {

	private:
		double *B;


	public:
		Magnetic_Field(double x, double y, double z) {
			B = new double[3] {x, y, z};
		}
	
		Magnetic_Field () {
			B = new double[3] {0.0, 0.0, 0.0};
		}

		~Magnetic_Field() {
			delete[] B;
		}

		double calculate_Magnetude() {
			return std::sqrt(B[0]*B[0] + B[1]*B[1] + B[2]*B[2]);
		}

		
		//getter
		double getx() {return B[0];}
		double gety() {return B[1];}
		double getz() {return B[2];}
		
		//setter
		void setx(double x) {B[0] = x;}
		void sety(double y) {B[1] = y;}
		void setz(double z) {B[2] = z;}



		void Unit_Vector() {
			double magnitude = calculateMagnitude();
				if(magnitude != 0) {
					std::cout<< "The Unit Vector: (" << B[0] / magnitude << ", "<< B[1] / magnitude << ", " << B[2] / magnitude << ")\n\n";

				}
				else {
					std::cout << "The magetic vector is 0! \nThe unit vector is UNDEFINED!\n\n";
				}
		}

};




int main() {
	Electric_Field E_default;
	Electric_Field E_components(1e5, 10.9, 1.7e2);
	Magnetic_Field B_default;
	Magnetic_Field B_components(0.5, 1.2, -0.8);

	std::cout<< "DEFAULT Electric Field Magnitude: " << E_default.calculate_Magnitude() << "\n";
	std::cout<< "COMPONENTS Electric Field Magnitude: " << E_components.calculate_Magnitude() << "\n";
	std::cout<< "Inner Product of Electric Field: " << E_components.inner_Product() << "\n";


	std::cout<< "DEFAULT Magnetic Field Magnitude: " << B_default.calculate_Magnitude() << "\n";
	std::cout<< "COMPONENTS Magnetic Field Magnitude: " << B_components.calculate_Magnitude() << "\n";
		B_components.unit_Vector();


	return 0;
}




