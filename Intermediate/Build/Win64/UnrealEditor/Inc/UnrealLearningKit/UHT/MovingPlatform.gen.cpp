// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealLearningKit/MovingPlatform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingPlatform() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UNREALLEARNINGKIT_API UClass* Z_Construct_UClass_AMovingPlatform();
UNREALLEARNINGKIT_API UClass* Z_Construct_UClass_AMovingPlatform_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealLearningKit();
// End Cross Module References

// Begin Class AMovingPlatform
void AMovingPlatform::StaticRegisterNativesAMovingPlatform()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMovingPlatform);
UClass* Z_Construct_UClass_AMovingPlatform_NoRegister()
{
	return AMovingPlatform::StaticClass();
}
struct Z_Construct_UClass_AMovingPlatform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MovingPlatform.h" },
		{ "ModuleRelativePath", "MovingPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[] = {
		{ "Category", "Moving" },
		{ "ModuleRelativePath", "MovingPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformVelocity_MetaData[] = {
		{ "Category", "Moving" },
		{ "ModuleRelativePath", "MovingPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_distance_MetaData[] = {
		{ "Category", "Moving" },
		{ "ModuleRelativePath", "MovingPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateVelocity_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "MovingPlatform.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_distance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotateVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingPlatform>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatform, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartLocation_MetaData), NewProp_StartLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_PlatformVelocity = { "PlatformVelocity", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatform, PlatformVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformVelocity_MetaData), NewProp_PlatformVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_distance = { "distance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatform, distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_distance_MetaData), NewProp_distance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_RotateVelocity = { "RotateVelocity", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatform, RotateVelocity), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateVelocity_MetaData), NewProp_RotateVelocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovingPlatform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_PlatformVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_RotateVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMovingPlatform_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealLearningKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovingPlatform_Statics::ClassParams = {
	&AMovingPlatform::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMovingPlatform_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::Class_MetaDataParams), Z_Construct_UClass_AMovingPlatform_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMovingPlatform()
{
	if (!Z_Registration_Info_UClass_AMovingPlatform.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovingPlatform.OuterSingleton, Z_Construct_UClass_AMovingPlatform_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMovingPlatform.OuterSingleton;
}
template<> UNREALLEARNINGKIT_API UClass* StaticClass<AMovingPlatform>()
{
	return AMovingPlatform::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingPlatform);
AMovingPlatform::~AMovingPlatform() {}
// End Class AMovingPlatform

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealLearningKit_Source_UnrealLearningKit_MovingPlatform_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMovingPlatform, AMovingPlatform::StaticClass, TEXT("AMovingPlatform"), &Z_Registration_Info_UClass_AMovingPlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovingPlatform), 3568964211U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealLearningKit_Source_UnrealLearningKit_MovingPlatform_h_1669407448(TEXT("/Script/UnrealLearningKit"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealLearningKit_Source_UnrealLearningKit_MovingPlatform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealLearningKit_Source_UnrealLearningKit_MovingPlatform_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
