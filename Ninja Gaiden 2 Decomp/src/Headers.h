#pragma once
/*Windows includes*/
#include <Windows.h>
#include <stdio.h>
#include <stdint.h>
#include <cstdint>
#include <math.h>
/*DirectX Includes*/
#include <d3d12.h>

// XEX File
void XEX(const char* xexname, int xexfilesize, int path);

// Xam Loader Termination of Game Title
void XamLoaderTerminateTitle();

//return a value with a string
void aXapiReturnValue(const char* name);


/*
struct XexHeader
{
    int Title_Module = 0x4;
    int ExportsToTitle = 0x4;
    int System_Debugger = 0x4;
    int DLL_Module = 0x4;
    int Module_Patch = 0x4;
    int Patch_Full = 0x4;
    int Patch_Delta = 0x4;
    int UserMode = 0x4;
    int ResourceInfo = 0x4;
    int	BaseFileFormat = 0x4;
    int	BaseReference = 0x4;
    int	DeltaPatchDescriptor = 0x4;
    int	BoundingPath = 0x4;
    int	DeviceID = 0x4;
    int OriginalBaseAddress = 0x4;
    int	EntryPoint = 0x4;
    int	ImageBaseAddress = 0x4;
    int	ImportLibraries = 0x4;
    int	ChecksumTimestamp = 0x4;
    int	EnabledForCallcap = 0x4;
    int	EnabledForFastcap = 0x4;
    int	OriginalPEName = 0x4;
    int	StaticLibraries = 0x4;
    int	TLSInfo = 0x4;
    int	DefaultStackSize = 0x4;
    int	DefaultFilesystemCacheSize = 0x4;
    int	DefaultHeapSize = 0x4;
    int	PageHeapSizeandFlags = 0x4;
    int	SystemFlags = 0x4;
    int	ExecutionID = 0x4;
    int	ServiceIDList = 0x4;
    int	TitleWorkspaceSize = 0x4;
    int	GameRatings = 0x4;
    int	LANKey = 0x4;
    int	Xbox360Logo = 0x4;
    int	MultidiscMediaIDs = 0x4;
    int	AlternateTitleIDs = 0x4;
    int	AdditionalTitleMemory = 0x4;
    int	ExportsbyName = 0x4;
    char XexMagic[5] = { "XEX2" };
};

*/
