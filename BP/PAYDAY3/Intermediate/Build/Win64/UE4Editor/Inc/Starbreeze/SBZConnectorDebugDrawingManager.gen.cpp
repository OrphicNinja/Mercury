// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZConnectorDebugDrawingManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZConnectorDebugDrawingManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZConnectorDebugDrawingManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZConnectorDebugDrawingManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_ULineBatchComponent_NoRegister();
// End Cross Module References
	void ASBZConnectorDebugDrawingManager::StaticRegisterNativesASBZConnectorDebugDrawingManager()
	{
	}
	UClass* Z_Construct_UClass_ASBZConnectorDebugDrawingManager_NoRegister()
	{
		return ASBZConnectorDebugDrawingManager::StaticClass();
	}
	struct Z_Construct_UClass_ASBZConnectorDebugDrawingManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineBatchComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LineBatchComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZConnectorDebugDrawingManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZConnectorDebugDrawingManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZConnectorDebugDrawingManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZConnectorDebugDrawingManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZConnectorDebugDrawingManager_Statics::NewProp_LineBatchComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConnectorDebugDrawingManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZConnectorDebugDrawingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZConnectorDebugDrawingManager_Statics::NewProp_LineBatchComponent = { "LineBatchComponent", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZConnectorDebugDrawingManager, LineBatchComponent), Z_Construct_UClass_ULineBatchComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZConnectorDebugDrawingManager_Statics::NewProp_LineBatchComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZConnectorDebugDrawingManager_Statics::NewProp_LineBatchComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZConnectorDebugDrawingManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZConnectorDebugDrawingManager_Statics::NewProp_LineBatchComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZConnectorDebugDrawingManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZConnectorDebugDrawingManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZConnectorDebugDrawingManager_Statics::ClassParams = {
		&ASBZConnectorDebugDrawingManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZConnectorDebugDrawingManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZConnectorDebugDrawingManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZConnectorDebugDrawingManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZConnectorDebugDrawingManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZConnectorDebugDrawingManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZConnectorDebugDrawingManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZConnectorDebugDrawingManager, 1614173133);
	template<> STARBREEZE_API UClass* StaticClass<ASBZConnectorDebugDrawingManager>()
	{
		return ASBZConnectorDebugDrawingManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZConnectorDebugDrawingManager(Z_Construct_UClass_ASBZConnectorDebugDrawingManager, &ASBZConnectorDebugDrawingManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZConnectorDebugDrawingManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZConnectorDebugDrawingManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
