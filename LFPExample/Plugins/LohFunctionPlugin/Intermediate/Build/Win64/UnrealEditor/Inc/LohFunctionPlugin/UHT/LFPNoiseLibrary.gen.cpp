// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LohFunctionPlugin/Public/Math/LFPNoiseLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLFPNoiseLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	LOHFUNCTIONPLUGIN_API UClass* Z_Construct_UClass_ULFPNoiseLibrary();
	LOHFUNCTIONPLUGIN_API UClass* Z_Construct_UClass_ULFPNoiseLibrary_NoRegister();
	LOHFUNCTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLFPNearbyVectorData();
	LOHFUNCTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLFPNoiseMixTable();
	LOHFUNCTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLFPNoiseTable();
	UPackage* Z_Construct_UPackage__Script_LohFunctionPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LFPNoiseMixTable;
class UScriptStruct* FLFPNoiseMixTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LFPNoiseMixTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LFPNoiseMixTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLFPNoiseMixTable, (UObject*)Z_Construct_UPackage__Script_LohFunctionPlugin(), TEXT("LFPNoiseMixTable"));
	}
	return Z_Registration_Info_UScriptStruct_LFPNoiseMixTable.OuterSingleton;
}
template<> LOHFUNCTIONPLUGIN_API UScriptStruct* StaticStruct<FLFPNoiseMixTable>()
{
	return FLFPNoiseMixTable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLFPNoiseMixTable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Multiply_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Multiply;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MixValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MixValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRoundSourceNoise_MetaData[];
#endif
		static void NewProp_bRoundSourceNoise_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRoundSourceNoise;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPNoiseMixTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Math/LFPNoiseLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLFPNoiseMixTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLFPNoiseMixTable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPNoiseMixTable_Statics::NewProp_Multiply_MetaData[] = {
		{ "Category", "LFPNoiseMixTable" },
		{ "ModuleRelativePath", "Public/Math/LFPNoiseLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLFPNoiseMixTable_Statics::NewProp_Multiply = { "Multiply", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPNoiseMixTable, Multiply), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPNoiseMixTable_Statics::NewProp_Multiply_MetaData), Z_Construct_UScriptStruct_FLFPNoiseMixTable_Statics::NewProp_Multiply_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPNoiseMixTable_Statics::NewProp_MixValue_MetaData[] = {
		{ "Category", "LFPNoiseMixTable" },
		{ "ModuleRelativePath", "Public/Math/LFPNoiseLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLFPNoiseMixTable_Statics::NewProp_MixValue = { "MixValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPNoiseMixTable, MixValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPNoiseMixTable_Statics::NewProp_MixValue_MetaData), Z_Construct_UScriptStruct_FLFPNoiseMixTable_Statics::NewProp_MixValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPNoiseMixTable_Statics::NewProp_bRoundSourceNoise_MetaData[] = {
		{ "Category", "LFPNoiseMixTable" },
		{ "ModuleRelativePath", "Public/Math/LFPNoiseLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLFPNoiseMixTable_Statics::NewProp_bRoundSourceNoise_SetBit(void* Obj)
	{
		((FLFPNoiseMixTable*)Obj)->bRoundSourceNoise = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLFPNoiseMixTable_Statics::NewProp_bRoundSourceNoise = { "bRoundSourceNoise", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLFPNoiseMixTable), &Z_Construct_UScriptStruct_FLFPNoiseMixTable_Statics::NewProp_bRoundSourceNoise_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPNoiseMixTable_Statics::NewProp_bRoundSourceNoise_MetaData), Z_Construct_UScriptStruct_FLFPNoiseMixTable_Statics::NewProp_bRoundSourceNoise_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLFPNoiseMixTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPNoiseMixTable_Statics::NewProp_Multiply,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPNoiseMixTable_Statics::NewProp_MixValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPNoiseMixTable_Statics::NewProp_bRoundSourceNoise,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLFPNoiseMixTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPlugin,
		nullptr,
		&NewStructOps,
		"LFPNoiseMixTable",
		Z_Construct_UScriptStruct_FLFPNoiseMixTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPNoiseMixTable_Statics::PropPointers),
		sizeof(FLFPNoiseMixTable),
		alignof(FLFPNoiseMixTable),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPNoiseMixTable_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLFPNoiseMixTable_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPNoiseMixTable_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLFPNoiseMixTable()
	{
		if (!Z_Registration_Info_UScriptStruct_LFPNoiseMixTable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LFPNoiseMixTable.InnerSingleton, Z_Construct_UScriptStruct_FLFPNoiseMixTable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LFPNoiseMixTable.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LFPNoiseTable;
class UScriptStruct* FLFPNoiseTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LFPNoiseTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LFPNoiseTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLFPNoiseTable, (UObject*)Z_Construct_UPackage__Script_LohFunctionPlugin(), TEXT("LFPNoiseTable"));
	}
	return Z_Registration_Info_UScriptStruct_LFPNoiseTable.OuterSingleton;
}
template<> LOHFUNCTIONPLUGIN_API UScriptStruct* StaticStruct<FLFPNoiseTable>()
{
	return FLFPNoiseTable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLFPNoiseTable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NoiseData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPNoiseTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Math/LFPNoiseLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLFPNoiseTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLFPNoiseTable>();
	}
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLFPNoiseTable_Statics::NewProp_NoiseData_Inner = { "NoiseData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPNoiseTable_Statics::NewProp_NoiseData_MetaData[] = {
		{ "Category", "LFPNoiseTable" },
		{ "ModuleRelativePath", "Public/Math/LFPNoiseLibrary.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLFPNoiseTable_Statics::NewProp_NoiseData = { "NoiseData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPNoiseTable, NoiseData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPNoiseTable_Statics::NewProp_NoiseData_MetaData), Z_Construct_UScriptStruct_FLFPNoiseTable_Statics::NewProp_NoiseData_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLFPNoiseTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPNoiseTable_Statics::NewProp_NoiseData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPNoiseTable_Statics::NewProp_NoiseData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLFPNoiseTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPlugin,
		nullptr,
		&NewStructOps,
		"LFPNoiseTable",
		Z_Construct_UScriptStruct_FLFPNoiseTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPNoiseTable_Statics::PropPointers),
		sizeof(FLFPNoiseTable),
		alignof(FLFPNoiseTable),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPNoiseTable_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLFPNoiseTable_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPNoiseTable_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLFPNoiseTable()
	{
		if (!Z_Registration_Info_UScriptStruct_LFPNoiseTable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LFPNoiseTable.InnerSingleton, Z_Construct_UScriptStruct_FLFPNoiseTable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LFPNoiseTable.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LFPNearbyVectorData;
class UScriptStruct* FLFPNearbyVectorData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LFPNearbyVectorData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LFPNearbyVectorData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLFPNearbyVectorData, (UObject*)Z_Construct_UPackage__Script_LohFunctionPlugin(), TEXT("LFPNearbyVectorData"));
	}
	return Z_Registration_Info_UScriptStruct_LFPNearbyVectorData.OuterSingleton;
}
template<> LOHFUNCTIONPLUGIN_API UScriptStruct* StaticStruct<FLFPNearbyVectorData>()
{
	return FLFPNearbyVectorData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLFPNearbyVectorData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NearbyDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NearbyDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NearbyVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NearbyVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NearbyPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NearbyPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPNearbyVectorData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Math/LFPNoiseLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLFPNearbyVectorData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLFPNearbyVectorData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPNearbyVectorData_Statics::NewProp_NearbyDistance_MetaData[] = {
		{ "Category", "LFPNearbyVectorData" },
		{ "ModuleRelativePath", "Public/Math/LFPNoiseLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLFPNearbyVectorData_Statics::NewProp_NearbyDistance = { "NearbyDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPNearbyVectorData, NearbyDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPNearbyVectorData_Statics::NewProp_NearbyDistance_MetaData), Z_Construct_UScriptStruct_FLFPNearbyVectorData_Statics::NewProp_NearbyDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPNearbyVectorData_Statics::NewProp_NearbyVector_MetaData[] = {
		{ "Category", "LFPNearbyVectorData" },
		{ "ModuleRelativePath", "Public/Math/LFPNoiseLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLFPNearbyVectorData_Statics::NewProp_NearbyVector = { "NearbyVector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPNearbyVectorData, NearbyVector), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPNearbyVectorData_Statics::NewProp_NearbyVector_MetaData), Z_Construct_UScriptStruct_FLFPNearbyVectorData_Statics::NewProp_NearbyVector_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPNearbyVectorData_Statics::NewProp_NearbyPoint_MetaData[] = {
		{ "Category", "LFPNearbyVectorData" },
		{ "ModuleRelativePath", "Public/Math/LFPNoiseLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLFPNearbyVectorData_Statics::NewProp_NearbyPoint = { "NearbyPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPNearbyVectorData, NearbyPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPNearbyVectorData_Statics::NewProp_NearbyPoint_MetaData), Z_Construct_UScriptStruct_FLFPNearbyVectorData_Statics::NewProp_NearbyPoint_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLFPNearbyVectorData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPNearbyVectorData_Statics::NewProp_NearbyDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPNearbyVectorData_Statics::NewProp_NearbyVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPNearbyVectorData_Statics::NewProp_NearbyPoint,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLFPNearbyVectorData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPlugin,
		nullptr,
		&NewStructOps,
		"LFPNearbyVectorData",
		Z_Construct_UScriptStruct_FLFPNearbyVectorData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPNearbyVectorData_Statics::PropPointers),
		sizeof(FLFPNearbyVectorData),
		alignof(FLFPNearbyVectorData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPNearbyVectorData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLFPNearbyVectorData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPNearbyVectorData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLFPNearbyVectorData()
	{
		if (!Z_Registration_Info_UScriptStruct_LFPNearbyVectorData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LFPNearbyVectorData.InnerSingleton, Z_Construct_UScriptStruct_FLFPNearbyVectorData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LFPNearbyVectorData.InnerSingleton;
	}
	DEFINE_FUNCTION(ULFPNoiseLibrary::execGetNearbyVectorNoise)
	{
		P_GET_STRUCT_REF(FLFPNoiseTable,Z_Param_Out_NoiseTable);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_UBOOL(Z_Param_IgnoreZ);
		P_GET_TARRAY_REF(FLFPNearbyVectorData,Z_Param_Out_ReturnData);
		P_GET_UBOOL(Z_Param_bRoundSourceNoise);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULFPNoiseLibrary::GetNearbyVectorNoise(Z_Param_Out_NoiseTable,Z_Param_Location,Z_Param_IgnoreZ,Z_Param_Out_ReturnData,Z_Param_bRoundSourceNoise);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPNoiseLibrary::execGetNearbySingleVectorNoise)
	{
		P_GET_STRUCT_REF(FLFPNoiseTable,Z_Param_Out_NoiseTable);
		P_GET_UBOOL(Z_Param_IgnoreZ);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_UBOOL(Z_Param_bRoundSourceNoise);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLFPNearbyVectorData*)Z_Param__Result=ULFPNoiseLibrary::GetNearbySingleVectorNoise(Z_Param_Out_NoiseTable,Z_Param_IgnoreZ,Z_Param_Location,Z_Param_bRoundSourceNoise);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPNoiseLibrary::execMixLerpDirection)
	{
		P_GET_STRUCT_REF(FLFPNoiseTable,Z_Param_Out_NoiseTable);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_TARRAY_REF(FLFPNoiseMixTable,Z_Param_Out_MixTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=ULFPNoiseLibrary::MixLerpDirection(Z_Param_Out_NoiseTable,Z_Param_Location,Z_Param_Out_MixTable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPNoiseLibrary::execMixLerpVector)
	{
		P_GET_STRUCT_REF(FLFPNoiseTable,Z_Param_Out_NoiseTable);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_TARRAY_REF(FLFPNoiseMixTable,Z_Param_Out_MixTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=ULFPNoiseLibrary::MixLerpVector(Z_Param_Out_NoiseTable,Z_Param_Location,Z_Param_Out_MixTable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPNoiseLibrary::execMixLerpNoise)
	{
		P_GET_STRUCT_REF(FLFPNoiseTable,Z_Param_Out_NoiseTable);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_TARRAY_REF(FLFPNoiseMixTable,Z_Param_Out_MixTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=ULFPNoiseLibrary::MixLerpNoise(Z_Param_Out_NoiseTable,Z_Param_Location,Z_Param_Out_MixTable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPNoiseLibrary::execGetLerpDirectionNoise)
	{
		P_GET_STRUCT_REF(FLFPNoiseTable,Z_Param_Out_NoiseTable);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_UBOOL(Z_Param_bRoundSourceNoise);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=ULFPNoiseLibrary::GetLerpDirectionNoise(Z_Param_Out_NoiseTable,Z_Param_Location,Z_Param_bRoundSourceNoise);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPNoiseLibrary::execGetLerpVectorNoise)
	{
		P_GET_STRUCT_REF(FLFPNoiseTable,Z_Param_Out_NoiseTable);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_UBOOL(Z_Param_bRoundSourceNoise);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=ULFPNoiseLibrary::GetLerpVectorNoise(Z_Param_Out_NoiseTable,Z_Param_Location,Z_Param_bRoundSourceNoise);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPNoiseLibrary::execGetLerpNoise)
	{
		P_GET_STRUCT_REF(FLFPNoiseTable,Z_Param_Out_NoiseTable);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_UBOOL(Z_Param_bRoundSourceNoise);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=ULFPNoiseLibrary::GetLerpNoise(Z_Param_Out_NoiseTable,Z_Param_Location,Z_Param_bRoundSourceNoise);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPNoiseLibrary::execGetDirectionNoise)
	{
		P_GET_STRUCT_REF(FLFPNoiseTable,Z_Param_Out_NoiseTable);
		P_GET_STRUCT(FIntVector,Z_Param_Location);
		P_GET_UBOOL(Z_Param_bRoundNoise);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=ULFPNoiseLibrary::GetDirectionNoise(Z_Param_Out_NoiseTable,Z_Param_Location,Z_Param_bRoundNoise);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPNoiseLibrary::execGetVectorNoise)
	{
		P_GET_STRUCT_REF(FLFPNoiseTable,Z_Param_Out_NoiseTable);
		P_GET_STRUCT(FIntVector,Z_Param_Location);
		P_GET_UBOOL(Z_Param_bRoundNoise);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=ULFPNoiseLibrary::GetVectorNoise(Z_Param_Out_NoiseTable,Z_Param_Location,Z_Param_bRoundNoise);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPNoiseLibrary::execGetFloatNoise)
	{
		P_GET_STRUCT_REF(FLFPNoiseTable,Z_Param_Out_NoiseTable);
		P_GET_STRUCT(FIntVector,Z_Param_Location);
		P_GET_UBOOL(Z_Param_bRoundNoise);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=ULFPNoiseLibrary::GetFloatNoise(Z_Param_Out_NoiseTable,Z_Param_Location,Z_Param_bRoundNoise);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPNoiseLibrary::execCreateNoiseTable)
	{
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_Seed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLFPNoiseTable*)Z_Param__Result=ULFPNoiseLibrary::CreateNoiseTable(Z_Param_Out_Seed);
		P_NATIVE_END;
	}
	void ULFPNoiseLibrary::StaticRegisterNativesULFPNoiseLibrary()
	{
		UClass* Class = ULFPNoiseLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateNoiseTable", &ULFPNoiseLibrary::execCreateNoiseTable },
			{ "GetDirectionNoise", &ULFPNoiseLibrary::execGetDirectionNoise },
			{ "GetFloatNoise", &ULFPNoiseLibrary::execGetFloatNoise },
			{ "GetLerpDirectionNoise", &ULFPNoiseLibrary::execGetLerpDirectionNoise },
			{ "GetLerpNoise", &ULFPNoiseLibrary::execGetLerpNoise },
			{ "GetLerpVectorNoise", &ULFPNoiseLibrary::execGetLerpVectorNoise },
			{ "GetNearbySingleVectorNoise", &ULFPNoiseLibrary::execGetNearbySingleVectorNoise },
			{ "GetNearbyVectorNoise", &ULFPNoiseLibrary::execGetNearbyVectorNoise },
			{ "GetVectorNoise", &ULFPNoiseLibrary::execGetVectorNoise },
			{ "MixLerpDirection", &ULFPNoiseLibrary::execMixLerpDirection },
			{ "MixLerpNoise", &ULFPNoiseLibrary::execMixLerpNoise },
			{ "MixLerpVector", &ULFPNoiseLibrary::execMixLerpVector },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULFPNoiseLibrary_CreateNoiseTable_Statics
	{
		struct LFPNoiseLibrary_eventCreateNoiseTable_Parms
		{
			FRandomStream Seed;
			FLFPNoiseTable ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Seed;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPNoiseLibrary_CreateNoiseTable_Statics::NewProp_Seed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_CreateNoiseTable_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPNoiseLibrary_eventCreateNoiseTable_Parms, Seed), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_CreateNoiseTable_Statics::NewProp_Seed_MetaData), Z_Construct_UFunction_ULFPNoiseLibrary_CreateNoiseTable_Statics::NewProp_Seed_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_CreateNoiseTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPNoiseLibrary_eventCreateNoiseTable_Parms, ReturnValue), Z_Construct_UScriptStruct_FLFPNoiseTable, METADATA_PARAMS(0, nullptr) }; // 3584819347
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPNoiseLibrary_CreateNoiseTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_CreateNoiseTable_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_CreateNoiseTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPNoiseLibrary_CreateNoiseTable_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPMathLibrary | Noise" },
		{ "ModuleRelativePath", "Public/Math/LFPNoiseLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPNoiseLibrary_CreateNoiseTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPNoiseLibrary, nullptr, "CreateNoiseTable", nullptr, nullptr, Z_Construct_UFunction_ULFPNoiseLibrary_CreateNoiseTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_CreateNoiseTable_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPNoiseLibrary_CreateNoiseTable_Statics::LFPNoiseLibrary_eventCreateNoiseTable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C42401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_CreateNoiseTable_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPNoiseLibrary_CreateNoiseTable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_CreateNoiseTable_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPNoiseLibrary_CreateNoiseTable_Statics::LFPNoiseLibrary_eventCreateNoiseTable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPNoiseLibrary_CreateNoiseTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPNoiseLibrary_CreateNoiseTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPNoiseLibrary_GetDirectionNoise_Statics
	{
		struct LFPNoiseLibrary_eventGetDirectionNoise_Parms
		{
			FLFPNoiseTable NoiseTable;
			FIntVector Location;
			bool bRoundNoise;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseTable_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NoiseTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRoundNoise_MetaData[];
#endif
		static void NewProp_bRoundNoise_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRoundNoise;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPNoiseLibrary_GetDirectionNoise_Statics::NewProp_NoiseTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_GetDirectionNoise_Statics::NewProp_NoiseTable = { "NoiseTable", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPNoiseLibrary_eventGetDirectionNoise_Parms, NoiseTable), Z_Construct_UScriptStruct_FLFPNoiseTable, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetDirectionNoise_Statics::NewProp_NoiseTable_MetaData), Z_Construct_UFunction_ULFPNoiseLibrary_GetDirectionNoise_Statics::NewProp_NoiseTable_MetaData) }; // 3584819347
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPNoiseLibrary_GetDirectionNoise_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_GetDirectionNoise_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPNoiseLibrary_eventGetDirectionNoise_Parms, Location), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetDirectionNoise_Statics::NewProp_Location_MetaData), Z_Construct_UFunction_ULFPNoiseLibrary_GetDirectionNoise_Statics::NewProp_Location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPNoiseLibrary_GetDirectionNoise_Statics::NewProp_bRoundNoise_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFPNoiseLibrary_GetDirectionNoise_Statics::NewProp_bRoundNoise_SetBit(void* Obj)
	{
		((LFPNoiseLibrary_eventGetDirectionNoise_Parms*)Obj)->bRoundNoise = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_GetDirectionNoise_Statics::NewProp_bRoundNoise = { "bRoundNoise", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPNoiseLibrary_eventGetDirectionNoise_Parms), &Z_Construct_UFunction_ULFPNoiseLibrary_GetDirectionNoise_Statics::NewProp_bRoundNoise_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetDirectionNoise_Statics::NewProp_bRoundNoise_MetaData), Z_Construct_UFunction_ULFPNoiseLibrary_GetDirectionNoise_Statics::NewProp_bRoundNoise_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_GetDirectionNoise_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPNoiseLibrary_eventGetDirectionNoise_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPNoiseLibrary_GetDirectionNoise_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_GetDirectionNoise_Statics::NewProp_NoiseTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_GetDirectionNoise_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_GetDirectionNoise_Statics::NewProp_bRoundNoise,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_GetDirectionNoise_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPNoiseLibrary_GetDirectionNoise_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPMathLibrary | Noise" },
		{ "CPP_Default_bRoundNoise", "false" },
		{ "ModuleRelativePath", "Public/Math/LFPNoiseLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPNoiseLibrary_GetDirectionNoise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPNoiseLibrary, nullptr, "GetDirectionNoise", nullptr, nullptr, Z_Construct_UFunction_ULFPNoiseLibrary_GetDirectionNoise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetDirectionNoise_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPNoiseLibrary_GetDirectionNoise_Statics::LFPNoiseLibrary_eventGetDirectionNoise_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C42401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetDirectionNoise_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPNoiseLibrary_GetDirectionNoise_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetDirectionNoise_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPNoiseLibrary_GetDirectionNoise_Statics::LFPNoiseLibrary_eventGetDirectionNoise_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPNoiseLibrary_GetDirectionNoise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPNoiseLibrary_GetDirectionNoise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPNoiseLibrary_GetFloatNoise_Statics
	{
		struct LFPNoiseLibrary_eventGetFloatNoise_Parms
		{
			FLFPNoiseTable NoiseTable;
			FIntVector Location;
			bool bRoundNoise;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseTable_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NoiseTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRoundNoise_MetaData[];
#endif
		static void NewProp_bRoundNoise_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRoundNoise;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPNoiseLibrary_GetFloatNoise_Statics::NewProp_NoiseTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_GetFloatNoise_Statics::NewProp_NoiseTable = { "NoiseTable", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPNoiseLibrary_eventGetFloatNoise_Parms, NoiseTable), Z_Construct_UScriptStruct_FLFPNoiseTable, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetFloatNoise_Statics::NewProp_NoiseTable_MetaData), Z_Construct_UFunction_ULFPNoiseLibrary_GetFloatNoise_Statics::NewProp_NoiseTable_MetaData) }; // 3584819347
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPNoiseLibrary_GetFloatNoise_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_GetFloatNoise_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPNoiseLibrary_eventGetFloatNoise_Parms, Location), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetFloatNoise_Statics::NewProp_Location_MetaData), Z_Construct_UFunction_ULFPNoiseLibrary_GetFloatNoise_Statics::NewProp_Location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPNoiseLibrary_GetFloatNoise_Statics::NewProp_bRoundNoise_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFPNoiseLibrary_GetFloatNoise_Statics::NewProp_bRoundNoise_SetBit(void* Obj)
	{
		((LFPNoiseLibrary_eventGetFloatNoise_Parms*)Obj)->bRoundNoise = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_GetFloatNoise_Statics::NewProp_bRoundNoise = { "bRoundNoise", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPNoiseLibrary_eventGetFloatNoise_Parms), &Z_Construct_UFunction_ULFPNoiseLibrary_GetFloatNoise_Statics::NewProp_bRoundNoise_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetFloatNoise_Statics::NewProp_bRoundNoise_MetaData), Z_Construct_UFunction_ULFPNoiseLibrary_GetFloatNoise_Statics::NewProp_bRoundNoise_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_GetFloatNoise_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPNoiseLibrary_eventGetFloatNoise_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPNoiseLibrary_GetFloatNoise_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_GetFloatNoise_Statics::NewProp_NoiseTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_GetFloatNoise_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_GetFloatNoise_Statics::NewProp_bRoundNoise,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_GetFloatNoise_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPNoiseLibrary_GetFloatNoise_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPMathLibrary | Noise" },
		{ "CPP_Default_bRoundNoise", "false" },
		{ "ModuleRelativePath", "Public/Math/LFPNoiseLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPNoiseLibrary_GetFloatNoise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPNoiseLibrary, nullptr, "GetFloatNoise", nullptr, nullptr, Z_Construct_UFunction_ULFPNoiseLibrary_GetFloatNoise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetFloatNoise_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPNoiseLibrary_GetFloatNoise_Statics::LFPNoiseLibrary_eventGetFloatNoise_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C42401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetFloatNoise_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPNoiseLibrary_GetFloatNoise_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetFloatNoise_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPNoiseLibrary_GetFloatNoise_Statics::LFPNoiseLibrary_eventGetFloatNoise_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPNoiseLibrary_GetFloatNoise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPNoiseLibrary_GetFloatNoise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpDirectionNoise_Statics
	{
		struct LFPNoiseLibrary_eventGetLerpDirectionNoise_Parms
		{
			FLFPNoiseTable NoiseTable;
			FVector Location;
			bool bRoundSourceNoise;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseTable_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NoiseTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRoundSourceNoise_MetaData[];
#endif
		static void NewProp_bRoundSourceNoise_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRoundSourceNoise;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpDirectionNoise_Statics::NewProp_NoiseTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpDirectionNoise_Statics::NewProp_NoiseTable = { "NoiseTable", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPNoiseLibrary_eventGetLerpDirectionNoise_Parms, NoiseTable), Z_Construct_UScriptStruct_FLFPNoiseTable, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpDirectionNoise_Statics::NewProp_NoiseTable_MetaData), Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpDirectionNoise_Statics::NewProp_NoiseTable_MetaData) }; // 3584819347
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpDirectionNoise_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpDirectionNoise_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPNoiseLibrary_eventGetLerpDirectionNoise_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpDirectionNoise_Statics::NewProp_Location_MetaData), Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpDirectionNoise_Statics::NewProp_Location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpDirectionNoise_Statics::NewProp_bRoundSourceNoise_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpDirectionNoise_Statics::NewProp_bRoundSourceNoise_SetBit(void* Obj)
	{
		((LFPNoiseLibrary_eventGetLerpDirectionNoise_Parms*)Obj)->bRoundSourceNoise = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpDirectionNoise_Statics::NewProp_bRoundSourceNoise = { "bRoundSourceNoise", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPNoiseLibrary_eventGetLerpDirectionNoise_Parms), &Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpDirectionNoise_Statics::NewProp_bRoundSourceNoise_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpDirectionNoise_Statics::NewProp_bRoundSourceNoise_MetaData), Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpDirectionNoise_Statics::NewProp_bRoundSourceNoise_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpDirectionNoise_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPNoiseLibrary_eventGetLerpDirectionNoise_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpDirectionNoise_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpDirectionNoise_Statics::NewProp_NoiseTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpDirectionNoise_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpDirectionNoise_Statics::NewProp_bRoundSourceNoise,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpDirectionNoise_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpDirectionNoise_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPMathLibrary | Noise" },
		{ "CPP_Default_bRoundSourceNoise", "false" },
		{ "ModuleRelativePath", "Public/Math/LFPNoiseLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpDirectionNoise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPNoiseLibrary, nullptr, "GetLerpDirectionNoise", nullptr, nullptr, Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpDirectionNoise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpDirectionNoise_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpDirectionNoise_Statics::LFPNoiseLibrary_eventGetLerpDirectionNoise_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C42401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpDirectionNoise_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpDirectionNoise_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpDirectionNoise_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpDirectionNoise_Statics::LFPNoiseLibrary_eventGetLerpDirectionNoise_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpDirectionNoise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpDirectionNoise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpNoise_Statics
	{
		struct LFPNoiseLibrary_eventGetLerpNoise_Parms
		{
			FLFPNoiseTable NoiseTable;
			FVector Location;
			bool bRoundSourceNoise;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseTable_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NoiseTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRoundSourceNoise_MetaData[];
#endif
		static void NewProp_bRoundSourceNoise_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRoundSourceNoise;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpNoise_Statics::NewProp_NoiseTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpNoise_Statics::NewProp_NoiseTable = { "NoiseTable", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPNoiseLibrary_eventGetLerpNoise_Parms, NoiseTable), Z_Construct_UScriptStruct_FLFPNoiseTable, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpNoise_Statics::NewProp_NoiseTable_MetaData), Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpNoise_Statics::NewProp_NoiseTable_MetaData) }; // 3584819347
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpNoise_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpNoise_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPNoiseLibrary_eventGetLerpNoise_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpNoise_Statics::NewProp_Location_MetaData), Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpNoise_Statics::NewProp_Location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpNoise_Statics::NewProp_bRoundSourceNoise_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpNoise_Statics::NewProp_bRoundSourceNoise_SetBit(void* Obj)
	{
		((LFPNoiseLibrary_eventGetLerpNoise_Parms*)Obj)->bRoundSourceNoise = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpNoise_Statics::NewProp_bRoundSourceNoise = { "bRoundSourceNoise", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPNoiseLibrary_eventGetLerpNoise_Parms), &Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpNoise_Statics::NewProp_bRoundSourceNoise_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpNoise_Statics::NewProp_bRoundSourceNoise_MetaData), Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpNoise_Statics::NewProp_bRoundSourceNoise_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpNoise_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPNoiseLibrary_eventGetLerpNoise_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpNoise_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpNoise_Statics::NewProp_NoiseTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpNoise_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpNoise_Statics::NewProp_bRoundSourceNoise,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpNoise_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpNoise_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPMathLibrary | Noise" },
		{ "CPP_Default_bRoundSourceNoise", "false" },
		{ "ModuleRelativePath", "Public/Math/LFPNoiseLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpNoise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPNoiseLibrary, nullptr, "GetLerpNoise", nullptr, nullptr, Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpNoise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpNoise_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpNoise_Statics::LFPNoiseLibrary_eventGetLerpNoise_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C42401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpNoise_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpNoise_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpNoise_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpNoise_Statics::LFPNoiseLibrary_eventGetLerpNoise_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpNoise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpNoise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpVectorNoise_Statics
	{
		struct LFPNoiseLibrary_eventGetLerpVectorNoise_Parms
		{
			FLFPNoiseTable NoiseTable;
			FVector Location;
			bool bRoundSourceNoise;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseTable_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NoiseTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRoundSourceNoise_MetaData[];
#endif
		static void NewProp_bRoundSourceNoise_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRoundSourceNoise;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpVectorNoise_Statics::NewProp_NoiseTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpVectorNoise_Statics::NewProp_NoiseTable = { "NoiseTable", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPNoiseLibrary_eventGetLerpVectorNoise_Parms, NoiseTable), Z_Construct_UScriptStruct_FLFPNoiseTable, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpVectorNoise_Statics::NewProp_NoiseTable_MetaData), Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpVectorNoise_Statics::NewProp_NoiseTable_MetaData) }; // 3584819347
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpVectorNoise_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpVectorNoise_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPNoiseLibrary_eventGetLerpVectorNoise_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpVectorNoise_Statics::NewProp_Location_MetaData), Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpVectorNoise_Statics::NewProp_Location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpVectorNoise_Statics::NewProp_bRoundSourceNoise_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpVectorNoise_Statics::NewProp_bRoundSourceNoise_SetBit(void* Obj)
	{
		((LFPNoiseLibrary_eventGetLerpVectorNoise_Parms*)Obj)->bRoundSourceNoise = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpVectorNoise_Statics::NewProp_bRoundSourceNoise = { "bRoundSourceNoise", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPNoiseLibrary_eventGetLerpVectorNoise_Parms), &Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpVectorNoise_Statics::NewProp_bRoundSourceNoise_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpVectorNoise_Statics::NewProp_bRoundSourceNoise_MetaData), Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpVectorNoise_Statics::NewProp_bRoundSourceNoise_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpVectorNoise_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPNoiseLibrary_eventGetLerpVectorNoise_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpVectorNoise_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpVectorNoise_Statics::NewProp_NoiseTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpVectorNoise_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpVectorNoise_Statics::NewProp_bRoundSourceNoise,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpVectorNoise_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpVectorNoise_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPMathLibrary | Noise" },
		{ "CPP_Default_bRoundSourceNoise", "false" },
		{ "ModuleRelativePath", "Public/Math/LFPNoiseLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpVectorNoise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPNoiseLibrary, nullptr, "GetLerpVectorNoise", nullptr, nullptr, Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpVectorNoise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpVectorNoise_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpVectorNoise_Statics::LFPNoiseLibrary_eventGetLerpVectorNoise_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C42401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpVectorNoise_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpVectorNoise_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpVectorNoise_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpVectorNoise_Statics::LFPNoiseLibrary_eventGetLerpVectorNoise_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpVectorNoise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpVectorNoise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbySingleVectorNoise_Statics
	{
		struct LFPNoiseLibrary_eventGetNearbySingleVectorNoise_Parms
		{
			FLFPNoiseTable NoiseTable;
			bool IgnoreZ;
			FVector Location;
			bool bRoundSourceNoise;
			FLFPNearbyVectorData ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseTable_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NoiseTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IgnoreZ_MetaData[];
#endif
		static void NewProp_IgnoreZ_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRoundSourceNoise_MetaData[];
#endif
		static void NewProp_bRoundSourceNoise_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRoundSourceNoise;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbySingleVectorNoise_Statics::NewProp_NoiseTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbySingleVectorNoise_Statics::NewProp_NoiseTable = { "NoiseTable", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPNoiseLibrary_eventGetNearbySingleVectorNoise_Parms, NoiseTable), Z_Construct_UScriptStruct_FLFPNoiseTable, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbySingleVectorNoise_Statics::NewProp_NoiseTable_MetaData), Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbySingleVectorNoise_Statics::NewProp_NoiseTable_MetaData) }; // 3584819347
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbySingleVectorNoise_Statics::NewProp_IgnoreZ_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbySingleVectorNoise_Statics::NewProp_IgnoreZ_SetBit(void* Obj)
	{
		((LFPNoiseLibrary_eventGetNearbySingleVectorNoise_Parms*)Obj)->IgnoreZ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbySingleVectorNoise_Statics::NewProp_IgnoreZ = { "IgnoreZ", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPNoiseLibrary_eventGetNearbySingleVectorNoise_Parms), &Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbySingleVectorNoise_Statics::NewProp_IgnoreZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbySingleVectorNoise_Statics::NewProp_IgnoreZ_MetaData), Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbySingleVectorNoise_Statics::NewProp_IgnoreZ_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbySingleVectorNoise_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbySingleVectorNoise_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPNoiseLibrary_eventGetNearbySingleVectorNoise_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbySingleVectorNoise_Statics::NewProp_Location_MetaData), Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbySingleVectorNoise_Statics::NewProp_Location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbySingleVectorNoise_Statics::NewProp_bRoundSourceNoise_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbySingleVectorNoise_Statics::NewProp_bRoundSourceNoise_SetBit(void* Obj)
	{
		((LFPNoiseLibrary_eventGetNearbySingleVectorNoise_Parms*)Obj)->bRoundSourceNoise = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbySingleVectorNoise_Statics::NewProp_bRoundSourceNoise = { "bRoundSourceNoise", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPNoiseLibrary_eventGetNearbySingleVectorNoise_Parms), &Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbySingleVectorNoise_Statics::NewProp_bRoundSourceNoise_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbySingleVectorNoise_Statics::NewProp_bRoundSourceNoise_MetaData), Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbySingleVectorNoise_Statics::NewProp_bRoundSourceNoise_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbySingleVectorNoise_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPNoiseLibrary_eventGetNearbySingleVectorNoise_Parms, ReturnValue), Z_Construct_UScriptStruct_FLFPNearbyVectorData, METADATA_PARAMS(0, nullptr) }; // 3993936200
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbySingleVectorNoise_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbySingleVectorNoise_Statics::NewProp_NoiseTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbySingleVectorNoise_Statics::NewProp_IgnoreZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbySingleVectorNoise_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbySingleVectorNoise_Statics::NewProp_bRoundSourceNoise,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbySingleVectorNoise_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbySingleVectorNoise_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPMathLibrary | Noise" },
		{ "CPP_Default_bRoundSourceNoise", "false" },
		{ "ModuleRelativePath", "Public/Math/LFPNoiseLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbySingleVectorNoise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPNoiseLibrary, nullptr, "GetNearbySingleVectorNoise", nullptr, nullptr, Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbySingleVectorNoise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbySingleVectorNoise_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbySingleVectorNoise_Statics::LFPNoiseLibrary_eventGetNearbySingleVectorNoise_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C42401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbySingleVectorNoise_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbySingleVectorNoise_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbySingleVectorNoise_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbySingleVectorNoise_Statics::LFPNoiseLibrary_eventGetNearbySingleVectorNoise_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbySingleVectorNoise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbySingleVectorNoise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbyVectorNoise_Statics
	{
		struct LFPNoiseLibrary_eventGetNearbyVectorNoise_Parms
		{
			FLFPNoiseTable NoiseTable;
			FVector Location;
			bool IgnoreZ;
			TArray<FLFPNearbyVectorData> ReturnData;
			bool bRoundSourceNoise;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseTable_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NoiseTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IgnoreZ_MetaData[];
#endif
		static void NewProp_IgnoreZ_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreZ;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnData_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRoundSourceNoise_MetaData[];
#endif
		static void NewProp_bRoundSourceNoise_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRoundSourceNoise;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbyVectorNoise_Statics::NewProp_NoiseTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbyVectorNoise_Statics::NewProp_NoiseTable = { "NoiseTable", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPNoiseLibrary_eventGetNearbyVectorNoise_Parms, NoiseTable), Z_Construct_UScriptStruct_FLFPNoiseTable, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbyVectorNoise_Statics::NewProp_NoiseTable_MetaData), Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbyVectorNoise_Statics::NewProp_NoiseTable_MetaData) }; // 3584819347
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbyVectorNoise_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbyVectorNoise_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPNoiseLibrary_eventGetNearbyVectorNoise_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbyVectorNoise_Statics::NewProp_Location_MetaData), Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbyVectorNoise_Statics::NewProp_Location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbyVectorNoise_Statics::NewProp_IgnoreZ_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbyVectorNoise_Statics::NewProp_IgnoreZ_SetBit(void* Obj)
	{
		((LFPNoiseLibrary_eventGetNearbyVectorNoise_Parms*)Obj)->IgnoreZ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbyVectorNoise_Statics::NewProp_IgnoreZ = { "IgnoreZ", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPNoiseLibrary_eventGetNearbyVectorNoise_Parms), &Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbyVectorNoise_Statics::NewProp_IgnoreZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbyVectorNoise_Statics::NewProp_IgnoreZ_MetaData), Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbyVectorNoise_Statics::NewProp_IgnoreZ_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbyVectorNoise_Statics::NewProp_ReturnData_Inner = { "ReturnData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLFPNearbyVectorData, METADATA_PARAMS(0, nullptr) }; // 3993936200
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbyVectorNoise_Statics::NewProp_ReturnData = { "ReturnData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPNoiseLibrary_eventGetNearbyVectorNoise_Parms, ReturnData), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3993936200
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbyVectorNoise_Statics::NewProp_bRoundSourceNoise_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbyVectorNoise_Statics::NewProp_bRoundSourceNoise_SetBit(void* Obj)
	{
		((LFPNoiseLibrary_eventGetNearbyVectorNoise_Parms*)Obj)->bRoundSourceNoise = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbyVectorNoise_Statics::NewProp_bRoundSourceNoise = { "bRoundSourceNoise", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPNoiseLibrary_eventGetNearbyVectorNoise_Parms), &Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbyVectorNoise_Statics::NewProp_bRoundSourceNoise_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbyVectorNoise_Statics::NewProp_bRoundSourceNoise_MetaData), Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbyVectorNoise_Statics::NewProp_bRoundSourceNoise_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbyVectorNoise_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbyVectorNoise_Statics::NewProp_NoiseTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbyVectorNoise_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbyVectorNoise_Statics::NewProp_IgnoreZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbyVectorNoise_Statics::NewProp_ReturnData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbyVectorNoise_Statics::NewProp_ReturnData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbyVectorNoise_Statics::NewProp_bRoundSourceNoise,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbyVectorNoise_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPMathLibrary | Noise" },
		{ "CPP_Default_bRoundSourceNoise", "false" },
		{ "ModuleRelativePath", "Public/Math/LFPNoiseLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbyVectorNoise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPNoiseLibrary, nullptr, "GetNearbyVectorNoise", nullptr, nullptr, Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbyVectorNoise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbyVectorNoise_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbyVectorNoise_Statics::LFPNoiseLibrary_eventGetNearbyVectorNoise_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C42401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbyVectorNoise_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbyVectorNoise_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbyVectorNoise_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbyVectorNoise_Statics::LFPNoiseLibrary_eventGetNearbyVectorNoise_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbyVectorNoise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbyVectorNoise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPNoiseLibrary_GetVectorNoise_Statics
	{
		struct LFPNoiseLibrary_eventGetVectorNoise_Parms
		{
			FLFPNoiseTable NoiseTable;
			FIntVector Location;
			bool bRoundNoise;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseTable_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NoiseTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRoundNoise_MetaData[];
#endif
		static void NewProp_bRoundNoise_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRoundNoise;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPNoiseLibrary_GetVectorNoise_Statics::NewProp_NoiseTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_GetVectorNoise_Statics::NewProp_NoiseTable = { "NoiseTable", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPNoiseLibrary_eventGetVectorNoise_Parms, NoiseTable), Z_Construct_UScriptStruct_FLFPNoiseTable, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetVectorNoise_Statics::NewProp_NoiseTable_MetaData), Z_Construct_UFunction_ULFPNoiseLibrary_GetVectorNoise_Statics::NewProp_NoiseTable_MetaData) }; // 3584819347
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPNoiseLibrary_GetVectorNoise_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_GetVectorNoise_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPNoiseLibrary_eventGetVectorNoise_Parms, Location), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetVectorNoise_Statics::NewProp_Location_MetaData), Z_Construct_UFunction_ULFPNoiseLibrary_GetVectorNoise_Statics::NewProp_Location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPNoiseLibrary_GetVectorNoise_Statics::NewProp_bRoundNoise_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFPNoiseLibrary_GetVectorNoise_Statics::NewProp_bRoundNoise_SetBit(void* Obj)
	{
		((LFPNoiseLibrary_eventGetVectorNoise_Parms*)Obj)->bRoundNoise = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_GetVectorNoise_Statics::NewProp_bRoundNoise = { "bRoundNoise", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPNoiseLibrary_eventGetVectorNoise_Parms), &Z_Construct_UFunction_ULFPNoiseLibrary_GetVectorNoise_Statics::NewProp_bRoundNoise_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetVectorNoise_Statics::NewProp_bRoundNoise_MetaData), Z_Construct_UFunction_ULFPNoiseLibrary_GetVectorNoise_Statics::NewProp_bRoundNoise_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_GetVectorNoise_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPNoiseLibrary_eventGetVectorNoise_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPNoiseLibrary_GetVectorNoise_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_GetVectorNoise_Statics::NewProp_NoiseTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_GetVectorNoise_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_GetVectorNoise_Statics::NewProp_bRoundNoise,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_GetVectorNoise_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPNoiseLibrary_GetVectorNoise_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPMathLibrary | Noise" },
		{ "CPP_Default_bRoundNoise", "false" },
		{ "ModuleRelativePath", "Public/Math/LFPNoiseLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPNoiseLibrary_GetVectorNoise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPNoiseLibrary, nullptr, "GetVectorNoise", nullptr, nullptr, Z_Construct_UFunction_ULFPNoiseLibrary_GetVectorNoise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetVectorNoise_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPNoiseLibrary_GetVectorNoise_Statics::LFPNoiseLibrary_eventGetVectorNoise_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C42401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetVectorNoise_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPNoiseLibrary_GetVectorNoise_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_GetVectorNoise_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPNoiseLibrary_GetVectorNoise_Statics::LFPNoiseLibrary_eventGetVectorNoise_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPNoiseLibrary_GetVectorNoise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPNoiseLibrary_GetVectorNoise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpDirection_Statics
	{
		struct LFPNoiseLibrary_eventMixLerpDirection_Parms
		{
			FLFPNoiseTable NoiseTable;
			FVector Location;
			TArray<FLFPNoiseMixTable> MixTable;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseTable_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NoiseTable;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MixTable_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MixTable_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MixTable;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpDirection_Statics::NewProp_NoiseTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpDirection_Statics::NewProp_NoiseTable = { "NoiseTable", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPNoiseLibrary_eventMixLerpDirection_Parms, NoiseTable), Z_Construct_UScriptStruct_FLFPNoiseTable, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpDirection_Statics::NewProp_NoiseTable_MetaData), Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpDirection_Statics::NewProp_NoiseTable_MetaData) }; // 3584819347
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpDirection_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPNoiseLibrary_eventMixLerpDirection_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpDirection_Statics::NewProp_MixTable_Inner = { "MixTable", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLFPNoiseMixTable, METADATA_PARAMS(0, nullptr) }; // 406902845
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpDirection_Statics::NewProp_MixTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpDirection_Statics::NewProp_MixTable = { "MixTable", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPNoiseLibrary_eventMixLerpDirection_Parms, MixTable), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpDirection_Statics::NewProp_MixTable_MetaData), Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpDirection_Statics::NewProp_MixTable_MetaData) }; // 406902845
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPNoiseLibrary_eventMixLerpDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpDirection_Statics::NewProp_NoiseTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpDirection_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpDirection_Statics::NewProp_MixTable_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpDirection_Statics::NewProp_MixTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPMathLibrary | Noise" },
		{ "ModuleRelativePath", "Public/Math/LFPNoiseLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPNoiseLibrary, nullptr, "MixLerpDirection", nullptr, nullptr, Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpDirection_Statics::LFPNoiseLibrary_eventMixLerpDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C42401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpDirection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpDirection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpDirection_Statics::LFPNoiseLibrary_eventMixLerpDirection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpNoise_Statics
	{
		struct LFPNoiseLibrary_eventMixLerpNoise_Parms
		{
			FLFPNoiseTable NoiseTable;
			FVector Location;
			TArray<FLFPNoiseMixTable> MixTable;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseTable_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NoiseTable;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MixTable_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MixTable_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MixTable;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpNoise_Statics::NewProp_NoiseTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpNoise_Statics::NewProp_NoiseTable = { "NoiseTable", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPNoiseLibrary_eventMixLerpNoise_Parms, NoiseTable), Z_Construct_UScriptStruct_FLFPNoiseTable, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpNoise_Statics::NewProp_NoiseTable_MetaData), Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpNoise_Statics::NewProp_NoiseTable_MetaData) }; // 3584819347
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpNoise_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPNoiseLibrary_eventMixLerpNoise_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpNoise_Statics::NewProp_MixTable_Inner = { "MixTable", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLFPNoiseMixTable, METADATA_PARAMS(0, nullptr) }; // 406902845
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpNoise_Statics::NewProp_MixTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpNoise_Statics::NewProp_MixTable = { "MixTable", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPNoiseLibrary_eventMixLerpNoise_Parms, MixTable), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpNoise_Statics::NewProp_MixTable_MetaData), Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpNoise_Statics::NewProp_MixTable_MetaData) }; // 406902845
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpNoise_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPNoiseLibrary_eventMixLerpNoise_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpNoise_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpNoise_Statics::NewProp_NoiseTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpNoise_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpNoise_Statics::NewProp_MixTable_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpNoise_Statics::NewProp_MixTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpNoise_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpNoise_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPMathLibrary | Noise" },
		{ "ModuleRelativePath", "Public/Math/LFPNoiseLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpNoise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPNoiseLibrary, nullptr, "MixLerpNoise", nullptr, nullptr, Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpNoise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpNoise_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpNoise_Statics::LFPNoiseLibrary_eventMixLerpNoise_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C42401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpNoise_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpNoise_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpNoise_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpNoise_Statics::LFPNoiseLibrary_eventMixLerpNoise_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpNoise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpNoise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpVector_Statics
	{
		struct LFPNoiseLibrary_eventMixLerpVector_Parms
		{
			FLFPNoiseTable NoiseTable;
			FVector Location;
			TArray<FLFPNoiseMixTable> MixTable;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseTable_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NoiseTable;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MixTable_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MixTable_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MixTable;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpVector_Statics::NewProp_NoiseTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpVector_Statics::NewProp_NoiseTable = { "NoiseTable", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPNoiseLibrary_eventMixLerpVector_Parms, NoiseTable), Z_Construct_UScriptStruct_FLFPNoiseTable, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpVector_Statics::NewProp_NoiseTable_MetaData), Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpVector_Statics::NewProp_NoiseTable_MetaData) }; // 3584819347
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpVector_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPNoiseLibrary_eventMixLerpVector_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpVector_Statics::NewProp_MixTable_Inner = { "MixTable", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLFPNoiseMixTable, METADATA_PARAMS(0, nullptr) }; // 406902845
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpVector_Statics::NewProp_MixTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpVector_Statics::NewProp_MixTable = { "MixTable", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPNoiseLibrary_eventMixLerpVector_Parms, MixTable), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpVector_Statics::NewProp_MixTable_MetaData), Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpVector_Statics::NewProp_MixTable_MetaData) }; // 406902845
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPNoiseLibrary_eventMixLerpVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpVector_Statics::NewProp_NoiseTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpVector_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpVector_Statics::NewProp_MixTable_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpVector_Statics::NewProp_MixTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPMathLibrary | Noise" },
		{ "ModuleRelativePath", "Public/Math/LFPNoiseLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPNoiseLibrary, nullptr, "MixLerpVector", nullptr, nullptr, Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpVector_Statics::LFPNoiseLibrary_eventMixLerpVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C42401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpVector_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpVector_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpVector_Statics::LFPNoiseLibrary_eventMixLerpVector_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULFPNoiseLibrary);
	UClass* Z_Construct_UClass_ULFPNoiseLibrary_NoRegister()
	{
		return ULFPNoiseLibrary::StaticClass();
	}
	struct Z_Construct_UClass_ULFPNoiseLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULFPNoiseLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPNoiseLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULFPNoiseLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULFPNoiseLibrary_CreateNoiseTable, "CreateNoiseTable" }, // 1375861937
		{ &Z_Construct_UFunction_ULFPNoiseLibrary_GetDirectionNoise, "GetDirectionNoise" }, // 1092071506
		{ &Z_Construct_UFunction_ULFPNoiseLibrary_GetFloatNoise, "GetFloatNoise" }, // 3513849094
		{ &Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpDirectionNoise, "GetLerpDirectionNoise" }, // 3354798387
		{ &Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpNoise, "GetLerpNoise" }, // 457561041
		{ &Z_Construct_UFunction_ULFPNoiseLibrary_GetLerpVectorNoise, "GetLerpVectorNoise" }, // 2658552628
		{ &Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbySingleVectorNoise, "GetNearbySingleVectorNoise" }, // 447439749
		{ &Z_Construct_UFunction_ULFPNoiseLibrary_GetNearbyVectorNoise, "GetNearbyVectorNoise" }, // 857144895
		{ &Z_Construct_UFunction_ULFPNoiseLibrary_GetVectorNoise, "GetVectorNoise" }, // 3093134888
		{ &Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpDirection, "MixLerpDirection" }, // 3067181245
		{ &Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpNoise, "MixLerpNoise" }, // 3504843864
		{ &Z_Construct_UFunction_ULFPNoiseLibrary_MixLerpVector, "MixLerpVector" }, // 1369312530
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPNoiseLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPNoiseLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "Math/LFPNoiseLibrary.h" },
		{ "ModuleRelativePath", "Public/Math/LFPNoiseLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULFPNoiseLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULFPNoiseLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULFPNoiseLibrary_Statics::ClassParams = {
		&ULFPNoiseLibrary::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPNoiseLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_ULFPNoiseLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULFPNoiseLibrary()
	{
		if (!Z_Registration_Info_UClass_ULFPNoiseLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULFPNoiseLibrary.OuterSingleton, Z_Construct_UClass_ULFPNoiseLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULFPNoiseLibrary.OuterSingleton;
	}
	template<> LOHFUNCTIONPLUGIN_API UClass* StaticClass<ULFPNoiseLibrary>()
	{
		return ULFPNoiseLibrary::StaticClass();
	}
	ULFPNoiseLibrary::ULFPNoiseLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULFPNoiseLibrary);
	ULFPNoiseLibrary::~ULFPNoiseLibrary() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Math_LFPNoiseLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Math_LFPNoiseLibrary_h_Statics::ScriptStructInfo[] = {
		{ FLFPNoiseMixTable::StaticStruct, Z_Construct_UScriptStruct_FLFPNoiseMixTable_Statics::NewStructOps, TEXT("LFPNoiseMixTable"), &Z_Registration_Info_UScriptStruct_LFPNoiseMixTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLFPNoiseMixTable), 406902845U) },
		{ FLFPNoiseTable::StaticStruct, Z_Construct_UScriptStruct_FLFPNoiseTable_Statics::NewStructOps, TEXT("LFPNoiseTable"), &Z_Registration_Info_UScriptStruct_LFPNoiseTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLFPNoiseTable), 3584819347U) },
		{ FLFPNearbyVectorData::StaticStruct, Z_Construct_UScriptStruct_FLFPNearbyVectorData_Statics::NewStructOps, TEXT("LFPNearbyVectorData"), &Z_Registration_Info_UScriptStruct_LFPNearbyVectorData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLFPNearbyVectorData), 3993936200U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Math_LFPNoiseLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULFPNoiseLibrary, ULFPNoiseLibrary::StaticClass, TEXT("ULFPNoiseLibrary"), &Z_Registration_Info_UClass_ULFPNoiseLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULFPNoiseLibrary), 106478098U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Math_LFPNoiseLibrary_h_810856723(TEXT("/Script/LohFunctionPlugin"),
		Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Math_LFPNoiseLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Math_LFPNoiseLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Math_LFPNoiseLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Math_LFPNoiseLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
