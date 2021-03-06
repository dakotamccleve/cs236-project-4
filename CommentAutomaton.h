//
// Created by dakot on 5/4/2021.
//

#ifndef CS236_PROJECT_1_COMMENTAUTOMATON_H
#define CS236_PROJECT_1_COMMENTAUTOMATON_H

#include "Automaton.h"

class CommentAutomaton : public Automaton {
private:
    void S1(const std::string& input);
    void S2(const std::string& input);
public:
    CommentAutomaton() : Automaton(TokenType::COMMENT) {}

    void S0(const std::string& input);

};


#endif //CS236_PROJECT_1_COMMENTAUTOMATON_H
