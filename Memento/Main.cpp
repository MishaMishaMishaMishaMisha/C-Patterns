#include "HistoryKeeper.h"

int main()
{
	TextEditor editor;
	HistoryKeeper manager(editor);

	editor.addText("my first text. ");
	manager.save();

	editor.addText("add new text. ");
	manager.save();

	editor.addText("my last text. ");
	manager.save();

	editor.showText();
	manager.undo();
	editor.showText();
	manager.undo();
	editor.showText();
	manager.undo();
	editor.showText();



	return 0;
}