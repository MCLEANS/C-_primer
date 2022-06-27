#include <iostream>
#include <memory>

/*  
* 1. Unique pointer: This is a scoped pointer, when the pointer goes out of scope the memory location that it points to is automatically
*    freed.
*    Unique pointers cannot be copied. This helps to avoid the case of dangling pointers (having a pointer pointing to memory
*	 that has already been freed).
* 2. Shared pointer : can be passed around to more that one pointer. It keeps a reference counter to the number of references to that 
*    particular pointer and the memory gets freed when the reference counter gets to zero. 
* 3. Weak pointer : Works the same as a shared pointer except that when it is created the reference counter does not get incremented.
*    You can however check whether a weak pointer is still valid before using it.
*/

/* Student class with constructor and destructor */
class Student{
	private: /* private variables */
	private: /* private methods */
	public:  /* public variables */
	public:  /*	public methods */
		Student(){
			std::cout<<"created student"<<std::endl;
		}

		void speak(){
			std::cout<<" I am a student"<<std::endl;
		}

		~Student(){
			std::cout<<"student object destroyed"<<std::endl;
		}
};

int main(int argc, char* argv[]){

	
	//std::unique_ptr<Student> student = std::make_unique<Student>();
	//student->speak();

	std::shared_ptr<Student> student = std::make_shared<Student>();
	{
		std::shared_ptr<Student> best_in_mathematics = student;
		best_in_mathematics->speak();
	}

	
	std::cout<<"Hello World!"<<std::endl;

	return 0;
}
