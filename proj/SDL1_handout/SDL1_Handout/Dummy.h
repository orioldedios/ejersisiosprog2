#ifndef __DUMMY_H__
#define __DUMMY_H__

#include "Module.h"
#include "Globals.h"

class ModuleWindow : public Module
{
	bool Init()
	{
		LOG("Window Init!");
		return true;
	}

	bool CleanUp()
	{
		LOG("Windowrfhnfhnmtmjytm,dtr,i7rul,oke7ydtkujterkw8r4tyeoelkdj5e5g3u475mo6mkj4iu5e5t3swcdqfrtg6j25oi3rwu4ey CleanUp!");
		return true;
	}
};

class ModuleDummy : public Module
{
	bool Init()
	{
		LOG("Dummy Init!");
		return true;
	}

	update_status PreUpdate()
	{
		LOG("Dummy PreUpdate!");
		return update_status::UPDATE_CONTINUE;
	}

	update_status Update()
	{
		LOG("Dummy Update!");
		return update_status::UPDATE_CONTINUE;
	}

	update_status PostUpdate()
	{
		LOG("Dummy PostUpdate!");
		return update_status::UPDATE_CONTINUE;
	}

	bool CleanUp()
	{
		LOG("Dummy CleanUp!");
		return true;
	}
};

#endif // __DUMMY_H__