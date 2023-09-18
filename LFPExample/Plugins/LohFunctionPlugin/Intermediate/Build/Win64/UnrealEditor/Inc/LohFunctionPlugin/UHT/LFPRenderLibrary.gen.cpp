// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LohFunctionPlugin/Public/Render/LFPRenderLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLFPRenderLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator3f();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureFilter();
	LOHFUNCTIONPLUGIN_API UClass* Z_Construct_UClass_ULFPRenderLibrary();
	LOHFUNCTIONPLUGIN_API UClass* Z_Construct_UClass_ULFPRenderLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LohFunctionPlugin();
// End Cross Module References
	DEFINE_FUNCTION(ULFPRenderLibrary::execCreateFaceData)
	{
		P_GET_TARRAY_REF(FVector3f,Z_Param_Out_VertexPosList);
		P_GET_TARRAY_REF(FVector3f,Z_Param_Out_VertexList);
		P_GET_TARRAY_REF(FVector2f,Z_Param_Out_UVList);
		P_GET_TARRAY_REF(uint32,Z_Param_Out_TriangleIndexList);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULFPRenderLibrary::CreateFaceData(Z_Param_Out_VertexPosList,Z_Param_Out_VertexList,Z_Param_Out_UVList,Z_Param_Out_TriangleIndexList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPRenderLibrary::execCreateVertexPosList)
	{
		P_GET_STRUCT_REF(FVector3f,Z_Param_Out_Center);
		P_GET_STRUCT_REF(FRotator3f,Z_Param_Out_Rotation);
		P_GET_STRUCT_REF(FVector3f,Z_Param_Out_Scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector3f>*)Z_Param__Result=ULFPRenderLibrary::CreateVertexPosList(Z_Param_Out_Center,Z_Param_Out_Rotation,Z_Param_Out_Scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPRenderLibrary::execCreateTexture2D)
	{
		P_GET_STRUCT(FIntPoint,Z_Param_Size);
		P_GET_PROPERTY(FByteProperty,Z_Param_Filter);
		P_GET_UBOOL(Z_Param_bSRGB);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=ULFPRenderLibrary::CreateTexture2D(Z_Param_Size,TextureFilter(Z_Param_Filter),Z_Param_bSRGB);
		P_NATIVE_END;
	}
	void ULFPRenderLibrary::StaticRegisterNativesULFPRenderLibrary()
	{
		UClass* Class = ULFPRenderLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateFaceData", &ULFPRenderLibrary::execCreateFaceData },
			{ "CreateTexture2D", &ULFPRenderLibrary::execCreateTexture2D },
			{ "CreateVertexPosList", &ULFPRenderLibrary::execCreateVertexPosList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULFPRenderLibrary_CreateFaceData_Statics
	{
		struct LFPRenderLibrary_eventCreateFaceData_Parms
		{
			TArray<FVector3f> VertexPosList;
			TArray<FVector3f> VertexList;
			TArray<FVector2f> UVList;
			TArray<uint32> TriangleIndexList;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexPosList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexPosList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexPosList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexList_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVList_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UVList;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_TriangleIndexList_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TriangleIndexList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPRenderLibrary_CreateFaceData_Statics::NewProp_VertexPosList_Inner = { "VertexPosList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPRenderLibrary_CreateFaceData_Statics::NewProp_VertexPosList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFPRenderLibrary_CreateFaceData_Statics::NewProp_VertexPosList = { "VertexPosList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPRenderLibrary_eventCreateFaceData_Parms, VertexPosList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPRenderLibrary_CreateFaceData_Statics::NewProp_VertexPosList_MetaData), Z_Construct_UFunction_ULFPRenderLibrary_CreateFaceData_Statics::NewProp_VertexPosList_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPRenderLibrary_CreateFaceData_Statics::NewProp_VertexList_Inner = { "VertexList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFPRenderLibrary_CreateFaceData_Statics::NewProp_VertexList = { "VertexList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPRenderLibrary_eventCreateFaceData_Parms, VertexList), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPRenderLibrary_CreateFaceData_Statics::NewProp_UVList_Inner = { "UVList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFPRenderLibrary_CreateFaceData_Statics::NewProp_UVList = { "UVList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPRenderLibrary_eventCreateFaceData_Parms, UVList), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_ULFPRenderLibrary_CreateFaceData_Statics::NewProp_TriangleIndexList_Inner = { "TriangleIndexList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFPRenderLibrary_CreateFaceData_Statics::NewProp_TriangleIndexList = { "TriangleIndexList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPRenderLibrary_eventCreateFaceData_Parms, TriangleIndexList), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPRenderLibrary_CreateFaceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPRenderLibrary_CreateFaceData_Statics::NewProp_VertexPosList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPRenderLibrary_CreateFaceData_Statics::NewProp_VertexPosList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPRenderLibrary_CreateFaceData_Statics::NewProp_VertexList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPRenderLibrary_CreateFaceData_Statics::NewProp_VertexList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPRenderLibrary_CreateFaceData_Statics::NewProp_UVList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPRenderLibrary_CreateFaceData_Statics::NewProp_UVList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPRenderLibrary_CreateFaceData_Statics::NewProp_TriangleIndexList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPRenderLibrary_CreateFaceData_Statics::NewProp_TriangleIndexList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPRenderLibrary_CreateFaceData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Render/LFPRenderLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPRenderLibrary_CreateFaceData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPRenderLibrary, nullptr, "CreateFaceData", nullptr, nullptr, Z_Construct_UFunction_ULFPRenderLibrary_CreateFaceData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPRenderLibrary_CreateFaceData_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPRenderLibrary_CreateFaceData_Statics::LFPRenderLibrary_eventCreateFaceData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPRenderLibrary_CreateFaceData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPRenderLibrary_CreateFaceData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPRenderLibrary_CreateFaceData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPRenderLibrary_CreateFaceData_Statics::LFPRenderLibrary_eventCreateFaceData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPRenderLibrary_CreateFaceData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPRenderLibrary_CreateFaceData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPRenderLibrary_CreateTexture2D_Statics
	{
		struct LFPRenderLibrary_eventCreateTexture2D_Parms
		{
			FIntPoint Size;
			TEnumAsByte<TextureFilter> Filter;
			bool bSRGB;
			UTexture2D* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Filter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSRGB_MetaData[];
#endif
		static void NewProp_bSRGB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSRGB;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPRenderLibrary_CreateTexture2D_Statics::NewProp_Size_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPRenderLibrary_CreateTexture2D_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPRenderLibrary_eventCreateTexture2D_Parms, Size), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPRenderLibrary_CreateTexture2D_Statics::NewProp_Size_MetaData), Z_Construct_UFunction_ULFPRenderLibrary_CreateTexture2D_Statics::NewProp_Size_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPRenderLibrary_CreateTexture2D_Statics::NewProp_Filter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULFPRenderLibrary_CreateTexture2D_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPRenderLibrary_eventCreateTexture2D_Parms, Filter), Z_Construct_UEnum_Engine_TextureFilter, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPRenderLibrary_CreateTexture2D_Statics::NewProp_Filter_MetaData), Z_Construct_UFunction_ULFPRenderLibrary_CreateTexture2D_Statics::NewProp_Filter_MetaData) }; // 2612248343
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPRenderLibrary_CreateTexture2D_Statics::NewProp_bSRGB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFPRenderLibrary_CreateTexture2D_Statics::NewProp_bSRGB_SetBit(void* Obj)
	{
		((LFPRenderLibrary_eventCreateTexture2D_Parms*)Obj)->bSRGB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPRenderLibrary_CreateTexture2D_Statics::NewProp_bSRGB = { "bSRGB", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPRenderLibrary_eventCreateTexture2D_Parms), &Z_Construct_UFunction_ULFPRenderLibrary_CreateTexture2D_Statics::NewProp_bSRGB_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPRenderLibrary_CreateTexture2D_Statics::NewProp_bSRGB_MetaData), Z_Construct_UFunction_ULFPRenderLibrary_CreateTexture2D_Statics::NewProp_bSRGB_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFPRenderLibrary_CreateTexture2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPRenderLibrary_eventCreateTexture2D_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPRenderLibrary_CreateTexture2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPRenderLibrary_CreateTexture2D_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPRenderLibrary_CreateTexture2D_Statics::NewProp_Filter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPRenderLibrary_CreateTexture2D_Statics::NewProp_bSRGB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPRenderLibrary_CreateTexture2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPRenderLibrary_CreateTexture2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPRenderLibrary" },
		{ "CPP_Default_bSRGB", "true" },
		{ "ModuleRelativePath", "Public/Render/LFPRenderLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPRenderLibrary_CreateTexture2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPRenderLibrary, nullptr, "CreateTexture2D", nullptr, nullptr, Z_Construct_UFunction_ULFPRenderLibrary_CreateTexture2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPRenderLibrary_CreateTexture2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPRenderLibrary_CreateTexture2D_Statics::LFPRenderLibrary_eventCreateTexture2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPRenderLibrary_CreateTexture2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPRenderLibrary_CreateTexture2D_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPRenderLibrary_CreateTexture2D_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPRenderLibrary_CreateTexture2D_Statics::LFPRenderLibrary_eventCreateTexture2D_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPRenderLibrary_CreateTexture2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPRenderLibrary_CreateTexture2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPRenderLibrary_CreateVertexPosList_Statics
	{
		struct LFPRenderLibrary_eventCreateVertexPosList_Parms
		{
			FVector3f Center;
			FRotator3f Rotation;
			FVector3f Scale;
			TArray<FVector3f> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPRenderLibrary_CreateVertexPosList_Statics::NewProp_Center_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPRenderLibrary_CreateVertexPosList_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPRenderLibrary_eventCreateVertexPosList_Parms, Center), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPRenderLibrary_CreateVertexPosList_Statics::NewProp_Center_MetaData), Z_Construct_UFunction_ULFPRenderLibrary_CreateVertexPosList_Statics::NewProp_Center_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPRenderLibrary_CreateVertexPosList_Statics::NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPRenderLibrary_CreateVertexPosList_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPRenderLibrary_eventCreateVertexPosList_Parms, Rotation), Z_Construct_UScriptStruct_FRotator3f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPRenderLibrary_CreateVertexPosList_Statics::NewProp_Rotation_MetaData), Z_Construct_UFunction_ULFPRenderLibrary_CreateVertexPosList_Statics::NewProp_Rotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPRenderLibrary_CreateVertexPosList_Statics::NewProp_Scale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPRenderLibrary_CreateVertexPosList_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPRenderLibrary_eventCreateVertexPosList_Parms, Scale), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPRenderLibrary_CreateVertexPosList_Statics::NewProp_Scale_MetaData), Z_Construct_UFunction_ULFPRenderLibrary_CreateVertexPosList_Statics::NewProp_Scale_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPRenderLibrary_CreateVertexPosList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFPRenderLibrary_CreateVertexPosList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPRenderLibrary_eventCreateVertexPosList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPRenderLibrary_CreateVertexPosList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPRenderLibrary_CreateVertexPosList_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPRenderLibrary_CreateVertexPosList_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPRenderLibrary_CreateVertexPosList_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPRenderLibrary_CreateVertexPosList_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPRenderLibrary_CreateVertexPosList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPRenderLibrary_CreateVertexPosList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Render/LFPRenderLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPRenderLibrary_CreateVertexPosList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPRenderLibrary, nullptr, "CreateVertexPosList", nullptr, nullptr, Z_Construct_UFunction_ULFPRenderLibrary_CreateVertexPosList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPRenderLibrary_CreateVertexPosList_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPRenderLibrary_CreateVertexPosList_Statics::LFPRenderLibrary_eventCreateVertexPosList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPRenderLibrary_CreateVertexPosList_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPRenderLibrary_CreateVertexPosList_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPRenderLibrary_CreateVertexPosList_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPRenderLibrary_CreateVertexPosList_Statics::LFPRenderLibrary_eventCreateVertexPosList_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPRenderLibrary_CreateVertexPosList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPRenderLibrary_CreateVertexPosList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULFPRenderLibrary);
	UClass* Z_Construct_UClass_ULFPRenderLibrary_NoRegister()
	{
		return ULFPRenderLibrary::StaticClass();
	}
	struct Z_Construct_UClass_ULFPRenderLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULFPRenderLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPRenderLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULFPRenderLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULFPRenderLibrary_CreateFaceData, "CreateFaceData" }, // 3684436722
		{ &Z_Construct_UFunction_ULFPRenderLibrary_CreateTexture2D, "CreateTexture2D" }, // 3771683973
		{ &Z_Construct_UFunction_ULFPRenderLibrary_CreateVertexPosList, "CreateVertexPosList" }, // 2955481282
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPRenderLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPRenderLibrary_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "Render/LFPRenderLibrary.h" },
		{ "ModuleRelativePath", "Public/Render/LFPRenderLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULFPRenderLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULFPRenderLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULFPRenderLibrary_Statics::ClassParams = {
		&ULFPRenderLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPRenderLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_ULFPRenderLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULFPRenderLibrary()
	{
		if (!Z_Registration_Info_UClass_ULFPRenderLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULFPRenderLibrary.OuterSingleton, Z_Construct_UClass_ULFPRenderLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULFPRenderLibrary.OuterSingleton;
	}
	template<> LOHFUNCTIONPLUGIN_API UClass* StaticClass<ULFPRenderLibrary>()
	{
		return ULFPRenderLibrary::StaticClass();
	}
	ULFPRenderLibrary::ULFPRenderLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULFPRenderLibrary);
	ULFPRenderLibrary::~ULFPRenderLibrary() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Render_LFPRenderLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Render_LFPRenderLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULFPRenderLibrary, ULFPRenderLibrary::StaticClass, TEXT("ULFPRenderLibrary"), &Z_Registration_Info_UClass_ULFPRenderLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULFPRenderLibrary), 2141494750U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Render_LFPRenderLibrary_h_3603458795(TEXT("/Script/LohFunctionPlugin"),
		Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Render_LFPRenderLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Render_LFPRenderLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
