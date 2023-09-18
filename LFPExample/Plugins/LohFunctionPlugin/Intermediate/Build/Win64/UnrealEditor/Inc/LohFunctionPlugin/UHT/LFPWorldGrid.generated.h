// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/LFPWorldGrid.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ELFPGridType : uint8;
#ifdef LOHFUNCTIONPLUGIN_LFPWorldGrid_generated_h
#error "LFPWorldGrid.generated.h already included, missing '#pragma once' in LFPWorldGrid.h"
#endif
#define LOHFUNCTIONPLUGIN_LFPWorldGrid_generated_h

#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPWorldGrid_h_27_SPARSE_DATA
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPWorldGrid_h_27_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPWorldGrid_h_27_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPWorldGrid_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGridType); \
	DECLARE_FUNCTION(execGetGridGap); \
	DECLARE_FUNCTION(execGetGridSize); \
	DECLARE_FUNCTION(execGetCenterOrigin); \
	DECLARE_FUNCTION(execGetVolumeSize); \
	DECLARE_FUNCTION(execGetGridLength); \
	DECLARE_FUNCTION(execIndexToWorldLocation); \
	DECLARE_FUNCTION(execGridLocationToWorldLocation); \
	DECLARE_FUNCTION(execIsWorldLocationValid); \
	DECLARE_FUNCTION(execWorldLocationToGridLocation); \
	DECLARE_FUNCTION(execWorldLocationToIndex);


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPWorldGrid_h_27_ACCESSORS
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPWorldGrid_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULFPWorldGrid(); \
	friend struct Z_Construct_UClass_ULFPWorldGrid_Statics; \
public: \
	DECLARE_CLASS(ULFPWorldGrid, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LohFunctionPlugin"), NO_API) \
	DECLARE_SERIALIZER(ULFPWorldGrid)


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPWorldGrid_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULFPWorldGrid(ULFPWorldGrid&&); \
	NO_API ULFPWorldGrid(const ULFPWorldGrid&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULFPWorldGrid); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULFPWorldGrid); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULFPWorldGrid) \
	NO_API virtual ~ULFPWorldGrid();


#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPWorldGrid_h_24_PROLOG
#define FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPWorldGrid_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPWorldGrid_h_27_SPARSE_DATA \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPWorldGrid_h_27_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPWorldGrid_h_27_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPWorldGrid_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPWorldGrid_h_27_ACCESSORS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPWorldGrid_h_27_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPWorldGrid_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOHFUNCTIONPLUGIN_API UClass* StaticClass<class ULFPWorldGrid>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPWorldGrid_h


#define FOREACH_ENUM_ELFPGRIDTYPE(op) \
	op(ELFPGridType::Rectangular) \
	op(ELFPGridType::Hexagon) \
	op(ELFPGridType::Triangle) 

enum class ELFPGridType : uint8;
template<> struct TIsUEnumClass<ELFPGridType> { enum { Value = true }; };
template<> LOHFUNCTIONPLUGIN_API UEnum* StaticEnum<ELFPGridType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
