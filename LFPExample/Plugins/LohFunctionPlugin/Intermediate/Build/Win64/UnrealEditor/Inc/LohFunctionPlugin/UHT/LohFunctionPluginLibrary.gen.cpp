// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LohFunctionPlugin/Public/LohFunctionPluginLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLohFunctionPluginLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	LOHFUNCTIONPLUGIN_API UClass* Z_Construct_UClass_ULohFunctionPluginLibrary();
	LOHFUNCTIONPLUGIN_API UClass* Z_Construct_UClass_ULohFunctionPluginLibrary_NoRegister();
	LOHFUNCTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLFPCompactIntArray();
	LOHFUNCTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLFPCompactIntNameArray();
	LOHFUNCTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLFPFunctionData();
	UPackage* Z_Construct_UPackage__Script_LohFunctionPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LFPCompactIntArray;
class UScriptStruct* FLFPCompactIntArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LFPCompactIntArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LFPCompactIntArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLFPCompactIntArray, (UObject*)Z_Construct_UPackage__Script_LohFunctionPlugin(), TEXT("LFPCompactIntArray"));
	}
	return Z_Registration_Info_UScriptStruct_LFPCompactIntArray.OuterSingleton;
}
template<> LOHFUNCTIONPLUGIN_API UScriptStruct* StaticStruct<FLFPCompactIntArray>()
{
	return FLFPCompactIntArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLFPCompactIntArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_IndexList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndexList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IndexList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EncodeBtye_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_EncodeBtye;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndexSize_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_IndexSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSize_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPCompactIntArray_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LohFunctionPluginLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLFPCompactIntArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLFPCompactIntArray>();
	}
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FLFPCompactIntArray_Statics::NewProp_IndexList_Inner = { "IndexList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPCompactIntArray_Statics::NewProp_IndexList_MetaData[] = {
		{ "ModuleRelativePath", "Public/LohFunctionPluginLibrary.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLFPCompactIntArray_Statics::NewProp_IndexList = { "IndexList", nullptr, (EPropertyFlags)0x0040000001000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPCompactIntArray, IndexList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPCompactIntArray_Statics::NewProp_IndexList_MetaData), Z_Construct_UScriptStruct_FLFPCompactIntArray_Statics::NewProp_IndexList_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPCompactIntArray_Statics::NewProp_EncodeBtye_MetaData[] = {
		{ "ModuleRelativePath", "Public/LohFunctionPluginLibrary.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FLFPCompactIntArray_Statics::NewProp_EncodeBtye = { "EncodeBtye", nullptr, (EPropertyFlags)0x0040000001000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPCompactIntArray, EncodeBtye), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPCompactIntArray_Statics::NewProp_EncodeBtye_MetaData), Z_Construct_UScriptStruct_FLFPCompactIntArray_Statics::NewProp_EncodeBtye_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPCompactIntArray_Statics::NewProp_IndexSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/LohFunctionPluginLibrary.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FLFPCompactIntArray_Statics::NewProp_IndexSize = { "IndexSize", nullptr, (EPropertyFlags)0x0040000001000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPCompactIntArray, IndexSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPCompactIntArray_Statics::NewProp_IndexSize_MetaData), Z_Construct_UScriptStruct_FLFPCompactIntArray_Statics::NewProp_IndexSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPCompactIntArray_Statics::NewProp_MaxSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/LohFunctionPluginLibrary.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FLFPCompactIntArray_Statics::NewProp_MaxSize = { "MaxSize", nullptr, (EPropertyFlags)0x0040000001000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPCompactIntArray, MaxSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPCompactIntArray_Statics::NewProp_MaxSize_MetaData), Z_Construct_UScriptStruct_FLFPCompactIntArray_Statics::NewProp_MaxSize_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLFPCompactIntArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPCompactIntArray_Statics::NewProp_IndexList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPCompactIntArray_Statics::NewProp_IndexList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPCompactIntArray_Statics::NewProp_EncodeBtye,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPCompactIntArray_Statics::NewProp_IndexSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPCompactIntArray_Statics::NewProp_MaxSize,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLFPCompactIntArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPlugin,
		nullptr,
		&NewStructOps,
		"LFPCompactIntArray",
		Z_Construct_UScriptStruct_FLFPCompactIntArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPCompactIntArray_Statics::PropPointers),
		sizeof(FLFPCompactIntArray),
		alignof(FLFPCompactIntArray),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPCompactIntArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLFPCompactIntArray_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPCompactIntArray_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLFPCompactIntArray()
	{
		if (!Z_Registration_Info_UScriptStruct_LFPCompactIntArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LFPCompactIntArray.InnerSingleton, Z_Construct_UScriptStruct_FLFPCompactIntArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LFPCompactIntArray.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLFPCompactIntNameArray>() == std::is_polymorphic<FLFPCompactIntArray>(), "USTRUCT FLFPCompactIntNameArray cannot be polymorphic unless super FLFPCompactIntArray is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LFPCompactIntNameArray;
class UScriptStruct* FLFPCompactIntNameArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LFPCompactIntNameArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LFPCompactIntNameArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLFPCompactIntNameArray, (UObject*)Z_Construct_UPackage__Script_LohFunctionPlugin(), TEXT("LFPCompactIntNameArray"));
	}
	return Z_Registration_Info_UScriptStruct_LFPCompactIntNameArray.OuterSingleton;
}
template<> LOHFUNCTIONPLUGIN_API UScriptStruct* StaticStruct<FLFPCompactIntNameArray>()
{
	return FLFPCompactIntNameArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLFPCompactIntNameArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPCompactIntNameArray_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LohFunctionPluginLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLFPCompactIntNameArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLFPCompactIntNameArray>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPCompactIntNameArray_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "LFPFunctionData" },
		{ "ModuleRelativePath", "Public/LohFunctionPluginLibrary.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLFPCompactIntNameArray_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPCompactIntNameArray, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPCompactIntNameArray_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FLFPCompactIntNameArray_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLFPCompactIntNameArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPCompactIntNameArray_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLFPCompactIntNameArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPlugin,
		Z_Construct_UScriptStruct_FLFPCompactIntArray,
		&NewStructOps,
		"LFPCompactIntNameArray",
		Z_Construct_UScriptStruct_FLFPCompactIntNameArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPCompactIntNameArray_Statics::PropPointers),
		sizeof(FLFPCompactIntNameArray),
		alignof(FLFPCompactIntNameArray),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPCompactIntNameArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLFPCompactIntNameArray_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPCompactIntNameArray_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLFPCompactIntNameArray()
	{
		if (!Z_Registration_Info_UScriptStruct_LFPCompactIntNameArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LFPCompactIntNameArray.InnerSingleton, Z_Construct_UScriptStruct_FLFPCompactIntNameArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LFPCompactIntNameArray.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LFPFunctionData;
class UScriptStruct* FLFPFunctionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LFPFunctionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LFPFunctionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLFPFunctionData, (UObject*)Z_Construct_UPackage__Script_LohFunctionPlugin(), TEXT("LFPFunctionData"));
	}
	return Z_Registration_Info_UScriptStruct_LFPFunctionData.OuterSingleton;
}
template<> LOHFUNCTIONPLUGIN_API UScriptStruct* StaticStruct<FLFPFunctionData>()
{
	return FLFPFunctionData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLFPFunctionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Caller_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Caller;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameAndParam_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NameAndParam;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPFunctionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LohFunctionPluginLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLFPFunctionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLFPFunctionData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPFunctionData_Statics::NewProp_Caller_MetaData[] = {
		{ "Category", "LFPFunctionData" },
		{ "ModuleRelativePath", "Public/LohFunctionPluginLibrary.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLFPFunctionData_Statics::NewProp_Caller = { "Caller", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPFunctionData, Caller), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPFunctionData_Statics::NewProp_Caller_MetaData), Z_Construct_UScriptStruct_FLFPFunctionData_Statics::NewProp_Caller_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPFunctionData_Statics::NewProp_NameAndParam_MetaData[] = {
		{ "Category", "LFPFunctionData" },
		{ "ModuleRelativePath", "Public/LohFunctionPluginLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLFPFunctionData_Statics::NewProp_NameAndParam = { "NameAndParam", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPFunctionData, NameAndParam), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPFunctionData_Statics::NewProp_NameAndParam_MetaData), Z_Construct_UScriptStruct_FLFPFunctionData_Statics::NewProp_NameAndParam_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLFPFunctionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPFunctionData_Statics::NewProp_Caller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPFunctionData_Statics::NewProp_NameAndParam,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLFPFunctionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPlugin,
		nullptr,
		&NewStructOps,
		"LFPFunctionData",
		Z_Construct_UScriptStruct_FLFPFunctionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPFunctionData_Statics::PropPointers),
		sizeof(FLFPFunctionData),
		alignof(FLFPFunctionData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPFunctionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLFPFunctionData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPFunctionData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLFPFunctionData()
	{
		if (!Z_Registration_Info_UScriptStruct_LFPFunctionData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LFPFunctionData.InnerSingleton, Z_Construct_UScriptStruct_FLFPFunctionData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LFPFunctionData.InnerSingleton;
	}
	DEFINE_FUNCTION(ULohFunctionPluginLibrary::execCallFunctionByFunctionData)
	{
		P_GET_STRUCT_REF(FLFPFunctionData,Z_Param_Out_FunctionData);
		P_GET_UBOOL(Z_Param_bForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULohFunctionPluginLibrary::CallFunctionByFunctionData(Z_Param_Out_FunctionData,Z_Param_bForce);
		P_NATIVE_END;
	}
	void ULohFunctionPluginLibrary::StaticRegisterNativesULohFunctionPluginLibrary()
	{
		UClass* Class = ULohFunctionPluginLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallFunctionByFunctionData", &ULohFunctionPluginLibrary::execCallFunctionByFunctionData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULohFunctionPluginLibrary_CallFunctionByFunctionData_Statics
	{
		struct LohFunctionPluginLibrary_eventCallFunctionByFunctionData_Parms
		{
			FLFPFunctionData FunctionData;
			bool bForce;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FunctionData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForce_MetaData[];
#endif
		static void NewProp_bForce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForce;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULohFunctionPluginLibrary_CallFunctionByFunctionData_Statics::NewProp_FunctionData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULohFunctionPluginLibrary_CallFunctionByFunctionData_Statics::NewProp_FunctionData = { "FunctionData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LohFunctionPluginLibrary_eventCallFunctionByFunctionData_Parms, FunctionData), Z_Construct_UScriptStruct_FLFPFunctionData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULohFunctionPluginLibrary_CallFunctionByFunctionData_Statics::NewProp_FunctionData_MetaData), Z_Construct_UFunction_ULohFunctionPluginLibrary_CallFunctionByFunctionData_Statics::NewProp_FunctionData_MetaData) }; // 208578415
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULohFunctionPluginLibrary_CallFunctionByFunctionData_Statics::NewProp_bForce_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULohFunctionPluginLibrary_CallFunctionByFunctionData_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((LohFunctionPluginLibrary_eventCallFunctionByFunctionData_Parms*)Obj)->bForce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULohFunctionPluginLibrary_CallFunctionByFunctionData_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LohFunctionPluginLibrary_eventCallFunctionByFunctionData_Parms), &Z_Construct_UFunction_ULohFunctionPluginLibrary_CallFunctionByFunctionData_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULohFunctionPluginLibrary_CallFunctionByFunctionData_Statics::NewProp_bForce_MetaData), Z_Construct_UFunction_ULohFunctionPluginLibrary_CallFunctionByFunctionData_Statics::NewProp_bForce_MetaData) };
	void Z_Construct_UFunction_ULohFunctionPluginLibrary_CallFunctionByFunctionData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LohFunctionPluginLibrary_eventCallFunctionByFunctionData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULohFunctionPluginLibrary_CallFunctionByFunctionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LohFunctionPluginLibrary_eventCallFunctionByFunctionData_Parms), &Z_Construct_UFunction_ULohFunctionPluginLibrary_CallFunctionByFunctionData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULohFunctionPluginLibrary_CallFunctionByFunctionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULohFunctionPluginLibrary_CallFunctionByFunctionData_Statics::NewProp_FunctionData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULohFunctionPluginLibrary_CallFunctionByFunctionData_Statics::NewProp_bForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULohFunctionPluginLibrary_CallFunctionByFunctionData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULohFunctionPluginLibrary_CallFunctionByFunctionData_Statics::Function_MetaDataParams[] = {
		{ "Category", "LohFunctionPluginTesting" },
		{ "CPP_Default_bForce", "true" },
		{ "ModuleRelativePath", "Public/LohFunctionPluginLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULohFunctionPluginLibrary_CallFunctionByFunctionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULohFunctionPluginLibrary, nullptr, "CallFunctionByFunctionData", nullptr, nullptr, Z_Construct_UFunction_ULohFunctionPluginLibrary_CallFunctionByFunctionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULohFunctionPluginLibrary_CallFunctionByFunctionData_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULohFunctionPluginLibrary_CallFunctionByFunctionData_Statics::LohFunctionPluginLibrary_eventCallFunctionByFunctionData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULohFunctionPluginLibrary_CallFunctionByFunctionData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULohFunctionPluginLibrary_CallFunctionByFunctionData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULohFunctionPluginLibrary_CallFunctionByFunctionData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULohFunctionPluginLibrary_CallFunctionByFunctionData_Statics::LohFunctionPluginLibrary_eventCallFunctionByFunctionData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULohFunctionPluginLibrary_CallFunctionByFunctionData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULohFunctionPluginLibrary_CallFunctionByFunctionData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULohFunctionPluginLibrary);
	UClass* Z_Construct_UClass_ULohFunctionPluginLibrary_NoRegister()
	{
		return ULohFunctionPluginLibrary::StaticClass();
	}
	struct Z_Construct_UClass_ULohFunctionPluginLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULohFunctionPluginLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULohFunctionPluginLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULohFunctionPluginLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULohFunctionPluginLibrary_CallFunctionByFunctionData, "CallFunctionByFunctionData" }, // 2259940010
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULohFunctionPluginLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULohFunctionPluginLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LohFunctionPluginLibrary.h" },
		{ "ModuleRelativePath", "Public/LohFunctionPluginLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULohFunctionPluginLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULohFunctionPluginLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULohFunctionPluginLibrary_Statics::ClassParams = {
		&ULohFunctionPluginLibrary::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULohFunctionPluginLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_ULohFunctionPluginLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULohFunctionPluginLibrary()
	{
		if (!Z_Registration_Info_UClass_ULohFunctionPluginLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULohFunctionPluginLibrary.OuterSingleton, Z_Construct_UClass_ULohFunctionPluginLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULohFunctionPluginLibrary.OuterSingleton;
	}
	template<> LOHFUNCTIONPLUGIN_API UClass* StaticClass<ULohFunctionPluginLibrary>()
	{
		return ULohFunctionPluginLibrary::StaticClass();
	}
	ULohFunctionPluginLibrary::ULohFunctionPluginLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULohFunctionPluginLibrary);
	ULohFunctionPluginLibrary::~ULohFunctionPluginLibrary() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_LohFunctionPluginLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_LohFunctionPluginLibrary_h_Statics::ScriptStructInfo[] = {
		{ FLFPCompactIntArray::StaticStruct, Z_Construct_UScriptStruct_FLFPCompactIntArray_Statics::NewStructOps, TEXT("LFPCompactIntArray"), &Z_Registration_Info_UScriptStruct_LFPCompactIntArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLFPCompactIntArray), 739085046U) },
		{ FLFPCompactIntNameArray::StaticStruct, Z_Construct_UScriptStruct_FLFPCompactIntNameArray_Statics::NewStructOps, TEXT("LFPCompactIntNameArray"), &Z_Registration_Info_UScriptStruct_LFPCompactIntNameArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLFPCompactIntNameArray), 1329260582U) },
		{ FLFPFunctionData::StaticStruct, Z_Construct_UScriptStruct_FLFPFunctionData_Statics::NewStructOps, TEXT("LFPFunctionData"), &Z_Registration_Info_UScriptStruct_LFPFunctionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLFPFunctionData), 208578415U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_LohFunctionPluginLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULohFunctionPluginLibrary, ULohFunctionPluginLibrary::StaticClass, TEXT("ULohFunctionPluginLibrary"), &Z_Registration_Info_UClass_ULohFunctionPluginLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULohFunctionPluginLibrary), 4226036127U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_LohFunctionPluginLibrary_h_2489316344(TEXT("/Script/LohFunctionPlugin"),
		Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_LohFunctionPluginLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_LohFunctionPluginLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_LohFunctionPluginLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_LohFunctionPluginLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
