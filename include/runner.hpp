#ifndef runner_hpp
#define runner_hpp

struct ToolUserInput : UserInput { // additional input

};

class Runner {
    
    ToolUserInput userInput;
        
public:
    
    void loadInput(ToolUserInput userInput);
    void run();
    
};

#endif /* runner_hpp */
