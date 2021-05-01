typedef struct{
    char name[20]; //학생이름
    int studentID; //학번
    char department[20]; //소속학부
    int tuesday; //화요일 출석 여부 0: 결석 1: 출석
    int friday; //금요일 출석 여부 0: 결석 1: 출석
} Student;

int selectMenu();
int loadFile(Student *s); //파일 불러오기
void saveData(Student *s, int index); //파일 저장하기
int createStudent(Student *s); //C
void readStudent(Student *s); //R
void updateStudent(Student *s); //U
void deleteStudent(Student *s); //D
void giveGrade(Student *s);
void searchName(Student *s);
void searchID(Student *s);