#include "LSystem.h"

LSystem::LSystem(std::string initialSequence)
{
    this->initialSequence = initialSequence;
    this->currentSequence = initialSequence;
}

void LSystem::reset()
{
    currentSequence = initialSequence;
}

const std::string & LSystem::getCurrentSequence() const
{
    return currentSequence;
}

void LSystem::addRule(char element, std::string replacementSequence)
{
    replacementRules[element] = replacementSequence;
}

void LSystem::iterate()
{
    std::string newSequence;

    for (unsigned int i = 0; i < currentSequence.size(); i++)
    {
        std::string replacement = getReplacementFor(currentSequence[i]);
        newSequence.append(replacement);
    }

    currentSequence = newSequence;
}

std::string LSystem::getReplacementFor(char element)
{
    std::unordered_map<char, std::string>::iterator rule = replacementRules.find(element);
    if (rule != replacementRules.end())
    {
        return rule->second;
    }
    else
    {
        return std::string(1, element);
    }
}
