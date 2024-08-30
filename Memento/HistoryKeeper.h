#pragma once
#include "TextEditor.h"
#include <stack>

class HistoryKeeper
{
private:
	std::stack<Memento> states;
	TextEditor& editor;

public:
	HistoryKeeper(TextEditor& editor) : editor(editor) {}

	void save()
	{
		states.push(editor.save());
	}

	void undo()
	{
		if (!states.empty())
		{
			editor.restore(states.top());
			states.pop();
		}
	}
};
