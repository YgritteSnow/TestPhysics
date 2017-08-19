#pragma once  

#ifdef JPHYSICS_EXPORTS  
#define JPHYSICS_API __declspec(dllexport)   
#else  
#define JPHYSICS_API __declspec(dllimport)   
#endif  

namespace JPhysics
{
	// This class is exported from the MathLibrary.dll  
	class Functions
	{
	public:
		// Returns a + b  
		static JPHYSICS_API double Add(double a, double b);

		// Returns a * b  
		static JPHYSICS_API double Multiply(double a, double b);

		// Returns a + (a * b)  
		static JPHYSICS_API double AddMultiply(double a, double b);
	};
}