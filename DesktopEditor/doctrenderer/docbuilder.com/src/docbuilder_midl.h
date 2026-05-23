/*
 * Copyright (C) Ascensio System SIA, 2009-2026
 *
 * This program is a free software product. You can redistribute it and/or
 * modify it under the terms of the GNU Affero General Public License (AGPL)
 * version 3 as published by the Free Software Foundation, together with the
 * additional terms provided in the LICENSE file.
 *
 * This program is distributed WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. For
 * details, see the GNU AGPL at: https://www.gnu.org/licenses/agpl-3.0.html
 *
 * You can contact Ascensio System SIA by email at info@tuneoffice.com
 * or by postal mail at 20A-6 Ernesta Birznieka-Upisha Street, Riga,
 * LV-1050, Latvia, European Union.
 *
 * The interactive user interfaces in modified versions of the Program
 * are required to display Appropriate Legal Notices in accordance with
 * Section 5 of the GNU AGPL version 3.
 *
 * No trademark rights are granted under this License.
 *
 * All non-code elements of the Product, including illustrations,
 * icon sets, and technical writing content, are licensed under the
 * Creative Commons Attribution-ShareAlike 4.0 International License:
 * https://creativecommons.org/licenses/by-sa/4.0/legalcode
 *
 * This license applies only to such non-code elements and does not
 * modify or replace the licensing terms applicable to the Program's
 * source code, which remains licensed under the GNU Affero General
 * Public License v3.
 *
 * SPDX-License-Identifier: AGPL-3.0-only
 */

#pragma once

#ifndef __cplusplus
#error "C++ compiler required"
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifdef CreateFile
#undef CreateFile
#endif

/* Forward Declarations */ 
typedef interface ITUNEOFFICEDocBuilderValue ITUNEOFFICEDocBuilderValue;
typedef interface ITUNEOFFICEDocBuilderContextScope ITUNEOFFICEDocBuilderContextScope;
typedef interface ITUNEOFFICEDocBuilderContext ITUNEOFFICEDocBuilderContext;
typedef interface ITUNEOFFICEDocBuilder ITUNEOFFICEDocBuilder;

typedef class CTUNEOFFICEDocBuilderValue CTUNEOFFICEDocBuilderValue;
typedef class CTUNEOFFICEDocBuilderContextScope CTUNEOFFICEDocBuilderContextScope;
typedef class CTUNEOFFICEDocBuilderContext CTUNEOFFICEDocBuilderContext;
typedef class CTUNEOFFICEDocBuilder CTUNEOFFICEDocBuilder;

MIDL_INTERFACE("2637FDFA-8473-4CB8-B90B-C23CB949D009")
ITUNEOFFICEDocBuilderValue : public IDispatch
{
public:
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE CreateInstance( 
        /* [optional][in] */ VARIANT value) = 0;
        
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE IsEmpty( 
        /* [retval][out] */ VARIANT_BOOL *result) = 0;
        
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE IsNull( 
        /* [retval][out] */ VARIANT_BOOL *result) = 0;
        
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE IsUndefined( 
        /* [retval][out] */ VARIANT_BOOL *result) = 0;
        
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE IsBool( 
        /* [retval][out] */ VARIANT_BOOL *result) = 0;
        
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE IsInt( 
        /* [retval][out] */ VARIANT_BOOL *result) = 0;
        
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE IsDouble( 
        /* [retval][out] */ VARIANT_BOOL *result) = 0;
        
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE IsString( 
        /* [retval][out] */ VARIANT_BOOL *result) = 0;
        
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE IsFunction( 
        /* [retval][out] */ VARIANT_BOOL *result) = 0;
        
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE IsObject( 
        /* [retval][out] */ VARIANT_BOOL *result) = 0;
        
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE IsArray( 
        /* [retval][out] */ VARIANT_BOOL *result) = 0;
        
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE IsTypedArray( 
        /* [retval][out] */ VARIANT_BOOL *result) = 0;
        
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetLength( 
        /* [retval][out] */ long *result) = 0;
        
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE ToBool( 
        /* [retval][out] */ VARIANT_BOOL *result) = 0;
        
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE ToInt( 
        /* [retval][out] */ long *result) = 0;
        
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE ToDouble( 
        /* [retval][out] */ double *result) = 0;
        
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE ToString( 
        /* [retval][out] */ BSTR *result) = 0;
        
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetProperty( 
        /* [in] */ BSTR name,
        /* [retval][out] */ ITUNEOFFICEDocBuilderValue **result) = 0;
        
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE Get( 
        /* [in] */ long index,
        /* [retval][out] */ ITUNEOFFICEDocBuilderValue **result) = 0;
        
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetProperty( 
        /* [in] */ BSTR name,
        /* [in] */ ITUNEOFFICEDocBuilderValue *value) = 0;
        
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE Set( 
        /* [in] */ long index,
        /* [in] */ ITUNEOFFICEDocBuilderValue *value) = 0;
        
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE Call( 
        /* [in] */ BSTR name,
        /* [optional][in] */ VARIANT val1,
        /* [optional][in] */ VARIANT val2,
        /* [optional][in] */ VARIANT val3,
        /* [optional][in] */ VARIANT val4,
        /* [optional][in] */ VARIANT val5,
        /* [optional][in] */ VARIANT val6,
        /* [retval][out] */ ITUNEOFFICEDocBuilderValue **result) = 0;
        
};

MIDL_INTERFACE("656ae95c-ae91-4dc0-88bf-0b770fc2d552")
ITUNEOFFICEDocBuilderContextScope : public IDispatch
{
public:
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
};
    
MIDL_INTERFACE("0416975a-65c3-4015-85e4-55d9dafec5fc")
ITUNEOFFICEDocBuilderContext : public IDispatch
{
public:
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE CreateUndefined( 
        /* [retval][out] */ ITUNEOFFICEDocBuilderValue **result) = 0;
        
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE CreateNull( 
        /* [retval][out] */ ITUNEOFFICEDocBuilderValue **result) = 0;
        
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE CreateObject( 
        /* [retval][out] */ ITUNEOFFICEDocBuilderValue **result) = 0;
        
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE CreateArray( 
        /* [in] */ long length,
        /* [retval][out] */ ITUNEOFFICEDocBuilderValue **result) = 0;
        
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE CreateTypedArray( 
        /* [in] */ VARIANT buffer,
        /* [in] */ long length,
        /* [retval][out] */ ITUNEOFFICEDocBuilderValue **result) = 0;
        
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetGlobal( 
        /* [retval][out] */ ITUNEOFFICEDocBuilderValue **result) = 0;
        
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE CreateScope( 
        /* [retval][out] */ ITUNEOFFICEDocBuilderContextScope **result) = 0;
        
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE IsError( 
        /* [retval][out] */ VARIANT_BOOL *result) = 0;
        
};

MIDL_INTERFACE("0C07B7E7-86A4-42E1-8E42-2FA961992E0F")
ITUNEOFFICEDocBuilder : public IDispatch
{
public:
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE CreateInstance( void) = 0;
        
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE OpenFile( 
        /* [in] */ BSTR path,
        /* [in] */ BSTR params,
        /* [retval][out] */ VARIANT_BOOL *result) = 0;
        
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE CreateFile( 
        /* [in] */ BSTR type,
        /* [retval][out] */ VARIANT_BOOL *result) = 0;
        
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetTmpFolder( 
        /* [in] */ BSTR folder) = 0;
        
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE SaveFile( 
        /* [in] */ BSTR type,
        /* [in] */ BSTR path,
        /* [retval][out] */ VARIANT_BOOL *result) = 0;
        
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE CloseFile( void) = 0;
        
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE ExecuteCommand( 
        /* [in] */ BSTR command,
        /* [retval][out] */ VARIANT_BOOL *result) = 0;
        
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE Run( 
        /* [in] */ BSTR path,
        /* [retval][out] */ VARIANT_BOOL *result) = 0;
        
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE RunText( 
        /* [in] */ BSTR commands,
        /* [retval][out] */ VARIANT_BOOL *result) = 0;
        
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetProperty( 
        /* [in] */ BSTR key,
        /* [in] */ BSTR value) = 0;
        
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE Execute( 
        /* [in] */ BSTR command,
        /* [retval][out] */ ITUNEOFFICEDocBuilderValue **result) = 0;
        
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE WriteData( 
        /* [in] */ BSTR path,
        /* [in] */ BSTR value,
        /* [in] */ VARIANT_BOOL append) = 0;
        
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE IsSaveWithDoctrendererMode( 
        /* [retval][out] */ VARIANT_BOOL *result) = 0;
        
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetContext( 
        /* [retval][out] */ ITUNEOFFICEDocBuilderContext **result) = 0;
        
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialize( void) = 0;
        
    virtual /* [id] */ HRESULT STDMETHODCALLTYPE Dispose( void) = 0;
        
};

class DECLSPEC_UUID("85C41585-25D7-40F1-9CC6-FA17052650F4")
CTUNEOFFICEDocBuilderValue;

class DECLSPEC_UUID("c54e2b15-ff5b-45a2-aa15-89a02605c30c")
CTUNEOFFICEDocBuilderContextScope;

class DECLSPEC_UUID("299250bb-16c2-4ab4-8a49-a0c350d66bb5")
CTUNEOFFICEDocBuilderContext;

class DECLSPEC_UUID("9BF69F3C-1506-41B9-B8EE-2839948C02E9")
CTUNEOFFICEDocBuilder;
