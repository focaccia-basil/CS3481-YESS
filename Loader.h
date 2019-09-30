class Loader
{
   private:
      bool loaded;        //set to true if a file is successfully loaded into memory
      std::ifstream inf;  //input file handle
      bool isValidFile(char* s);
   public:
      Loader(int argc, char * argv[]);
      bool isLoaded();
      bool isCommentRecord(std::string line);
      bool isDataRecord(std::string line);
      bool isValidMemory(std::string line);
      bool hasErrors(std::string line);
      int convert(std::string s, int begin, int end); 
};