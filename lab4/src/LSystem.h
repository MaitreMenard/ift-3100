#pragma once
#include <string>
#include <unordered_map>

class LSystem
{
private:
    std::string initialSequence;
    std::string currentSequence;
    std::unordered_map<char, std::string> replacementRules;

    std::string getReplacementFor(char element);

public:
    LSystem(std::string initialSequence);

    void reset();
    const std::string& getCurrentSequence() const;
    void addRule(char element, std::string replacementSequence);
    void iterate();
};
