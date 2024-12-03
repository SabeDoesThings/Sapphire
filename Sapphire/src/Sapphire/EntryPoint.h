#pragma once

#ifdef SP_PLATFORM_WINDOWS

extern Sapphire::Application* Sapphire::CreateApplication();

int main(int argc, char** argv) {
	auto app = Sapphire::CreateApplication();
	app->run();
	delete app;
}
#endif