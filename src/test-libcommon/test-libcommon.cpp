#include "stdafx.h"
#include "gmock/gmock.h"

int main(int argc, wchar_t **argv)
{
	::testing::InitGoogleMock(&argc, argv);

	return RUN_ALL_TESTS();
}
