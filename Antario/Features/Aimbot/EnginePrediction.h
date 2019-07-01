#pragma once

class CEnginePred
{
public:
	void run_prediction();
	void end_prediction();
};

extern CEnginePred* prediction;