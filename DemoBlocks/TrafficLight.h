#pragma once
class TrafficLight
{
private:
	enum SignalColor
	{
		GREEM,
		YELLOW,
		RED
	};
	int changeTimeSeconds = 120;
	bool hasTurn = false;
	short speedLimit = 15;

public:
	void updateSignal();
	void flashing();
};

