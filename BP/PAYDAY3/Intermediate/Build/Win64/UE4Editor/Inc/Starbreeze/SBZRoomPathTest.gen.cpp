// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRoomPathTest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRoomPathTest() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRoomPathTest_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRoomPathTest();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ASBZRoomPathTest::StaticRegisterNativesASBZRoomPathTest()
	{
	}
	UClass* Z_Construct_UClass_ASBZRoomPathTest_NoRegister()
	{
		return ASBZRoomPathTest::StaticClass();
	}
	struct Z_Construct_UClass_ASBZRoomPathTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZRoomPathTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRoomPathTest_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZRoomPathTest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZRoomPathTest.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRoomPathTest_Statics::NewProp_StartPosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRoomPathTest" },
		{ "ModuleRelativePath", "Public/SBZRoomPathTest.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZRoomPathTest_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZRoomPathTest, StartPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASBZRoomPathTest_Statics::NewProp_StartPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRoomPathTest_Statics::NewProp_StartPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZRoomPathTest_Statics::NewProp_EndPosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRoomPathTest" },
		{ "ModuleRelativePath", "Public/SBZRoomPathTest.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZRoomPathTest_Statics::NewProp_EndPosition = { "EndPosition", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZRoomPathTest, EndPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASBZRoomPathTest_Statics::NewProp_EndPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRoomPathTest_Statics::NewProp_EndPosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZRoomPathTest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRoomPathTest_Statics::NewProp_StartPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZRoomPathTest_Statics::NewProp_EndPosition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZRoomPathTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZRoomPathTest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZRoomPathTest_Statics::ClassParams = {
		&ASBZRoomPathTest::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZRoomPathTest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRoomPathTest_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZRoomPathTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZRoomPathTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZRoomPathTest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZRoomPathTest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZRoomPathTest, 3542783914);
	template<> STARBREEZE_API UClass* StaticClass<ASBZRoomPathTest>()
	{
		return ASBZRoomPathTest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZRoomPathTest(Z_Construct_UClass_ASBZRoomPathTest, &ASBZRoomPathTest::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZRoomPathTest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZRoomPathTest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
