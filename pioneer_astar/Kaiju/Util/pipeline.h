//
// Laboratory of Robotics and Cognitive Science
// Created by:  Leonardo de Oliveira Ramos
// Github:      https://github.com/oramleo
//

#ifndef ARCH_PIPELINE_H_
#define ARCH_PIPELINE_H_


#include <Execute/action.h>

class Pipeline
{
protected:
	std::vector<Action *> actions;
public:
	void push(Action* action);
	bool next(Action** action);

	bool isEmpty();
};


#endif // ARCH_PIPELINE_H_
