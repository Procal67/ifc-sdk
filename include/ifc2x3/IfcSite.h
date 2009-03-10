/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#ifndef IFC2X3_IFCSITE_H
#define IFC2X3_IFCSITE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/String.h>
#include "ifc2x3/IfcSpatialStructureElement.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcPostalAddress;

    /**
     */
    class IFC2X3_DLL_DEF IfcSite : public IfcSpatialStructureElement {
    public:
        /**
         * Accepts a read/write Step::BaseVisitor.
         * 
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);
        /**
         * Returns the class type as a human readable std::string.
         * 
         */
        virtual const std::string &type() const;
        /**
         * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
         * 
         */
        static const Step::ClassType &getClassType();
        /**
         * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
         * 
         */
        virtual const Step::ClassType &getType() const;
        /**
         * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
         * 
         * @param t
         */
        virtual bool isOfType(const Step::ClassType &t) const;
        /**
         * Gets the value of the explicit attribute 'RefLatitude'.
         * 
         */
        virtual IfcCompoundPlaneAngleMeasure &getRefLatitude();
        /**
         * (const) Returns the value of the explicit attribute 'RefLatitude'.
         * 
         * @return the value of the explicit attribute 'RefLatitude'
         */
        virtual const IfcCompoundPlaneAngleMeasure &getRefLatitude() const;
        /**
         * Sets the value of the explicit attribute 'RefLatitude'.
         * 
         * @param value
         */
        virtual void setRefLatitude(const IfcCompoundPlaneAngleMeasure &value);
        /**
         * Gets the value of the explicit attribute 'RefLongitude'.
         * 
         */
        virtual IfcCompoundPlaneAngleMeasure &getRefLongitude();
        /**
         * (const) Returns the value of the explicit attribute 'RefLongitude'.
         * 
         * @return the value of the explicit attribute 'RefLongitude'
         */
        virtual const IfcCompoundPlaneAngleMeasure &getRefLongitude() const;
        /**
         * Sets the value of the explicit attribute 'RefLongitude'.
         * 
         * @param value
         */
        virtual void setRefLongitude(const IfcCompoundPlaneAngleMeasure &value);
        /**
         * Gets the value of the explicit attribute 'RefElevation'.
         * 
         */
        virtual IfcLengthMeasure getRefElevation();
        /**
         * (const) Returns the value of the explicit attribute 'RefElevation'.
         * 
         * @return the value of the explicit attribute 'RefElevation'
         */
        virtual const IfcLengthMeasure getRefElevation() const;
        /**
         * Sets the value of the explicit attribute 'RefElevation'.
         * 
         * @param value
         */
        virtual void setRefElevation(IfcLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'LandTitleNumber'.
         * 
         */
        virtual IfcLabel getLandTitleNumber();
        /**
         * (const) Returns the value of the explicit attribute 'LandTitleNumber'.
         * 
         * @return the value of the explicit attribute 'LandTitleNumber'
         */
        virtual const IfcLabel getLandTitleNumber() const;
        /**
         * Sets the value of the explicit attribute 'LandTitleNumber'.
         * 
         * @param value
         */
        virtual void setLandTitleNumber(const IfcLabel &value);
        /**
         * Gets the value of the explicit attribute 'SiteAddress'.
         * 
         */
        virtual IfcPostalAddress *getSiteAddress();
        /**
         * (const) Returns the value of the explicit attribute 'SiteAddress'.
         * 
         * @return the value of the explicit attribute 'SiteAddress'
         */
        virtual const IfcPostalAddress *getSiteAddress() const;
        /**
         * Sets the value of the explicit attribute 'SiteAddress'.
         * 
         * @param value
         */
        virtual void setSiteAddress(const Step::RefPtr< IfcPostalAddress > &value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcSite(Step::Id id, Step::SPFData *args);
        virtual ~IfcSite();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcSite &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        List_Integer_3_4 m_refLatitude;
        /**
         */
        List_Integer_3_4 m_refLongitude;
        /**
         */
        Step::Real m_refElevation;
        /**
         */
        Step::String m_landTitleNumber;
        /**
         */
        Step::RefPtr< IfcPostalAddress > m_siteAddress;

    };

}

#endif // IFC2X3_IFCSITE_H
