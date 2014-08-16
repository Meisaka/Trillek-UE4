

#pragma once

#include "Slate"
/**
 * 
 */
class TRILLEK_API STMainMenuUI : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(STMainMenuUI)
	{}
	SLATE_END_ARGS()

	/** Constructs this widget with InArgs */
	void Construct(const FArguments& InArgs);
};
