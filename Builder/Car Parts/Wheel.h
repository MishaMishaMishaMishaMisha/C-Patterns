#pragma once

class Wheel
{
public:
	enum Material {Steel, Alloy, Forged};

	Wheel(Material material, int diameter);

	void showWheel();

private:
	Material material;
	int diameter;
};